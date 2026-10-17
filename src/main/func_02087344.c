/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_context.c (arm build): func_02087344 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef int BOOL;
typedef struct CPContext {
u64 div_numer;
u64 div_denom;
u64 sqrt;
u16 div_mode;
u16 sqrt_mode;
} CPContext;
void func_0207dbc4(CPContext * context);
typedef struct OSContext {
u32 cpsr;
u32 r[13];
u32 sp;
u32 lr;
u32 pc_plus4;
u32 sp_svc;
CPContext cp_context;
} OSContext;
BOOL func_02087344(OSContext * context);
asm BOOL func_02087344 (register OSContext * context)
{
stmfd sp !, { lr, r0 }
add r0, r0, #72
ldr r1, = func_0207dbc4
blx r1
ldmfd sp !, { lr, r0 }
add r1, r0, #0
mrs r2, cpsr
str r2, [r1], #4 - 0
mov r0, #0x13 | 0x80 | 0x40 | 0x0
msr cpsr_c, r0
str sp, [r1, #68 - 4 ]
msr cpsr_c, r2
mov r0, #1
stmia r1, {r0 - r14}
add r0, pc, #8
str r0, [r1, #64 - 4 ]
mov r0, #0
bx lr
}
