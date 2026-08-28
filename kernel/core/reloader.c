#include <linux/module.h>
#include <linux/kmod.h>
#include <linux/workqueue.h>

#include "reloader.h"

static void ksu_reload_worker() {
    char *argv[] = { "/usr/sbin/kernelsu-loader", NULL };
    char *envp[] = { NULL };

    pr_info("Reloading KernelSU via user-space helpers\n");

    // Executes modprobe asynchronously so the current kernel thread isn't blocked
    call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
}

static DECLARE_WORK(reload_work, ksu_reload_worker);

void ksu_trigger_reload() {
    schedule_work(&reload_work);
}
