#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("VotreNom");
MODULE_DESCRIPTION("Exemple de module noyau simple");
MODULE_VERSION("1.0");

static int __init my_module_init(void) {
    printk(KERN_INFO "Module chargé : Bonjour, noyau !\n");
    return 0;
}

static void __exit my_module_exit(void) {
    printk(KERN_INFO "Module déchargé : Au revoir, noyau !\n");
}

module_init(my_module_init);
module_exit(my_module_exit);
