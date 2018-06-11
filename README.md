 SYSTEMC-2.3.2 INSTALLATION IN UBUNTU

Download SystemC source from [www.accellera.org](http://www.accellera.org/downloads/standards/systemc)

    $ tar -xzvf systemc-2.3.2.tgz
    $ cd systemc-2.3.2
    $ sudo mkdir /usr/local/systemc-2.3.2
    $ mkdir objdir
    $ cd objdir
    $ ../configure --prefix=/usr/local/systemc-2.3.2
    $ make 
    $ sudo make install
    
    $ export SYSTEMC_HOME=/usr/local/systemc-2.3.2
    $ export LD_LIBRARY_PATH=/usr/local/systemc-2.3.2/lib-linux64 
    
