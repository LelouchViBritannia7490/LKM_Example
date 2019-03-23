obj-m += moduleParam.o		# moduleParam.o is just a name
				# you can call it how ever you want
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
