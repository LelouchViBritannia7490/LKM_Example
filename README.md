# LKM_Example


### useful commands:

* make - compile c-source-code to .ko(LKM) and .o
* make clean - cleans the folder(deletes everthing without .c and Makefile)
* dmesg - shows /var/log/kern.log
* insmod - insert module
* rmmod - remove module
* lsmod - lists modules
* modinfo - information about a module

### useful files/directories

* /var/log/kern.log
    * kernel ring buffer
    * printk logs there in
* /proc/
    * list of proccesses (also modules)
* /proc/modules
    * list of all modules + proccessID + current kernel memory offset (important for debugging)
* /sys/module/
    * list of all modules (moduels are directories)
* /sys/module/MODULE_DIRECTORY
    * lists files and dirs of the module
    * i.e. has information about coresize, initsize and parameter(directory)
