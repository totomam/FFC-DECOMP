/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_init.c (arm build): func_02087904 */
asm void func_02087904 (void)
{
mov r12, #0x04000000
ldr r1, [r12, #0x208 ]
str r12, [r12, #0x208 ]
@wait_vcount_0:
ldrh r0, [r12, #0x006 ]
cmp r0, #0
bne @wait_vcount_0
str r1, [r12, #0x208 ]
bx lr
}
