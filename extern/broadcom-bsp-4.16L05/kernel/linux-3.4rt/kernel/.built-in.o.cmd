cmd_kernel/built-in.o :=  /opt/toolchains/crosstools-arm-gcc-4.6-linux-3.4-uclibc-0.9.32-binutils-2.21-NPTL/usr/bin/arm-unknown-linux-uclibcgnueabi-ld -EL    -r -o kernel/built-in.o kernel/fork.o kernel/exec_domain.o kernel/panic.o kernel/printk.o kernel/cpu.o kernel/exit.o kernel/itimer.o kernel/time.o kernel/softirq.o kernel/resource.o kernel/sysctl.o kernel/sysctl_binary.o kernel/capability.o kernel/ptrace.o kernel/timer.o kernel/user.o kernel/signal.o kernel/sys.o kernel/kmod.o kernel/workqueue.o kernel/pid.o kernel/rcupdate.o kernel/extable.o kernel/params.o kernel/posix-timers.o kernel/kthread.o kernel/wait.o kernel/kfifo.o kernel/sys_ni.o kernel/posix-cpu-timers.o kernel/hrtimer.o kernel/nsproxy.o kernel/srcu.o kernel/semaphore.o kernel/notifier.o kernel/ksysfs.o kernel/cred.o kernel/async.o kernel/range.o kernel/groups.o kernel/sched/built-in.o kernel/power/built-in.o kernel/time/built-in.o kernel/mutex.o kernel/rwsem.o kernel/futex.o kernel/rtmutex.o kernel/smp.o kernel/spinlock.o kernel/module.o kernel/kallsyms.o kernel/configs.o kernel/stop_machine.o kernel/irq/built-in.o kernel/rcutree.o kernel/utsname_sysctl.o kernel/elfcore.o kernel/bcm_log.o 
