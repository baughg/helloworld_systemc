#include "systemc.h"
#include <iostream>
#include <iomanip> 

SC_MODULE(mon)
{
  sc_in<bool> A,B,F;
  sc_in<bool> Clk;

  void monitor()
  {
    std::cout << std::setw(10) << "Time";
    std::cout << std::setw(2) << "A" ;
    std::cout << std::setw(2) << "B";
    std::cout << std::setw(2) << "F" << endl;
    while (true)
    {
      std::cout << std::setw(10) << sc_time_stamp();
      std::cout << std::setw(2) << A.read();
      std::cout << std::setw(2) << B.read();
      std::cout << std::setw(2) << F.read() << endl;
      wait();    // wait for 1 clock cycle
    }
  }

  SC_CTOR(mon)
  {
    SC_THREAD(monitor);
    sensitive << Clk.pos();
  }
};