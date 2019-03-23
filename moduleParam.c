#include <linux/module.h>		//included for all kernel modules
#include <linux/kernel.h>		//included for KERN_INFO, KERN_WARNING, ...
#include <linux/init.h>			//included for __init and __exit macros

MODULE_AUTHOR( "Lelouch vi Britannia" );
MODULE_DESCRIPTION( "Test module for using parameters" );
MODULE_LICENSE( "GPL" );


static char* name = "World";				//default value for name is "World"
module_param( name, charp, S_IRUGO );		//charp = char ptr
MODULE_PARM_DESC( name, "name to display in /var/log/kern.log" );

static int __init moduleParam_init( void ){
	//adds an entery into the kernel ring buffer (/var/log/kern.log)
    printk( KERN_INFO "Hello %s\n", name );		//\n is important
    return 0;
}

static void __exit moduleParam_exit( void ){
    printk( KERN_WARNING "Jaa ne %s\n", name );//KERN_INFO is the kind of message/log
}

module_init( moduleParam_init );//defines function which will called by init
module_exit( moduleParam_exit );//defines function which will called on exit
