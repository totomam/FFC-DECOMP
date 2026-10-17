/* cflags: -nothumb */
/* From libntr libntr/libraries/cp/src/cp_context.c (arm build): func_0207dc04 */
typedef unsigned short int u16;
typedef unsigned long long int u64;
typedef struct CPContext {
u64 div_numer;
u64 div_denom;
u64 sqrt;
u16 div_mode;
u16 sqrt_mode;
} CPContext;
void func_0207dc04(const CPContext * context);
asm void func_0207dc04 (register const CPContext *context)
{
stmfd sp !, {r4}
ldr r1, = (0x04000000 + 0x290)
ldmia r0, {r2 - r4, r12}
stmia r1, {r2 - r4, r12}
ldrh r2, [r0, #CPContext.div_mode]
ldrh r3, [r0, #CPContext.sqrt_mode]
strh r2, [r1, #0x280 - 0x290 ]
strh r3, [r1, #0x2b0 - 0x290 ]
add r0, r0, #CPContext.sqrt
add r1, r1, #0x2b8 - 0x290
ldmia r0, {r2 - r3}
stmia r1, {r2 - r3}
ldmfd sp !, {r4}
bx lr
}
