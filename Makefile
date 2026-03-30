# Define the module name and target object
obj-m += char_driver.o

# Path to the kernel build directory
KDIR := /lib/modules/$(shell uname -r)/build

# Current directory
PWD := $(shell pwd)

# Default target
all:
	$(MAKE) -C $(KDIR) M=$(PWD) modules

# Clean up build files
clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean

