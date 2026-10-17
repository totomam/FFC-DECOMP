/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_alarm.c (arm build): func_0208859c */
void func_0208859c(void * arg);
void func_020885ac(void);
asm void func_0208859c (void * arg)
{
stmfd sp !, {r0, lr}
bl func_020885ac
ldmfd sp !, {r0, lr}
bx lr
}
void func_020885ac (void);
