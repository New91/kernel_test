obj-m := hello.o
KER_BUILD := /lib/modules/$(shell uname -r)/build
default:
	make -C $(KER_BUILD) M=$(shell pwd) modules
