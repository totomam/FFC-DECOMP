/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_exception.c (arm build): func_020880a0 */
asm void func_020880a0(void);
asm void func_02088114(void);
extern void * data_021417b4;
asm void func_020880a0 (void)
{
ldr r12, = data_021417b4
ldr r12, [r12]
cmp r12, #0
movne lr, pc
bxne r12
ldr r12, = (0x01ff8000 + 0x8000)
stmfd r12 !, {r0 - r3, sp, lr}
and r0, sp, #1
mov sp, r12
mrs r1, CPSR
and r1, r1, #0x1f
teq r1, #0x17
bne @10
bl func_02088114
b usr_return
@10:
teq r1, #0x1b
bne usr_return
bl func_02088114
usr_return:
ldr r12, = data_021417b4
ldr r12, [r12]
cmp r12, #0
@1:
beq @1
@2:
mov r0, r0
b @2
ldmfd sp !, {r0 - r3, r12, lr}
mov sp, r12
bx lr
}
asm void func_02088114 (void);
