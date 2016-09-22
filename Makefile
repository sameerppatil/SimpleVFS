CONFIG_MODULE_SIG=n
obj-m += simplevfs.o
simplevfs-y := src/simplevfs.o

all: module

module:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
