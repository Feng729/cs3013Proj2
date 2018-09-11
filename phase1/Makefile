obj-m := mymodule.o
KDIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

all: testcall.c
	$(MAKE) -C $(KDIR) M=$(PWD) modules
	gcc -g -Wall -o testcall testcall.c

clean:
	$(MAKE) -C $(KDIR) M=$(PWD) clean
	$(RM) testcall
