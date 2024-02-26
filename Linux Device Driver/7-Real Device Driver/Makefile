obj-m += Real_Device_Driver.o
 
ifdef ARCH
  #You can update your Beaglebone path here.
  KDIR = /home/Ali_Wazeer/BBG/tmp/lib/modules/5.10.65/build
else
  KDIR = /lib/modules/$(shell uname -r)/build
endif
 
 
all:
  make -C $(KDIR)  M=$(shell pwd) modules
 
clean:
  make -C $(KDIR)  M=$(shell pwd) clean
  /*
  TEST_APP USING USER SPACE


  Compile the User Space Application
Use the below line in the terminal to compile the user space application.

gcc -o test_app test_app.c

If you are using the Beaglebone board, then you can use arm-linux-gnueabihf-gcc -o test_app test_app.c.

Execution (Output)
As of now, we have driver.ko and test_app. Now we will see the output.

Load the driver using sudo insmod driver.ko
Run the application (sudo ./test_app)
  */