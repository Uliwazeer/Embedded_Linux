obj-m += Sysfs_in_Linux_Kernel.o
 
KDIR = /lib/modules/$(shell uname -r)/build
all:
    make -C $(KDIR)  M=$(shell pwd) modules
 
clean:
    make -C $(KDIR)  M=$(shell pwd) clean