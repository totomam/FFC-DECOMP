/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_exception.c (arm build): func_02088114 */
asm void func_02088114(void);
asm void func_02088128(void);
void func_020881a8(void);
asm void func_02088114 (void)
{
stmfd sp !, {r0, lr}
bl func_02088128
bl func_020881a8
ldmfd sp !, {r0, lr}
bx lr
}
asm void func_02088128 (void);
void func_020881a8 (void);
