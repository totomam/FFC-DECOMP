/* cflags: -nothumb */
/* From libntr libntr/libraries/os/src/os_context.c (arm build): func_020872d8 */
typedef unsigned short int u16;
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct CPContext {
u64 div_numer;
u64 div_denom;
u64 sqrt;
u16 div_mode;
u16 sqrt_mode;
} CPContext;
typedef struct OSContext {
u32 cpsr;
u32 r[13];
u32 sp;
u32 lr;
u32 pc_plus4;
u32 sp_svc;
CPContext cp_context;
} OSContext;
void func_020872d8(OSContext * context, u32 newpc, u32 newsp);
asm void func_020872d8 (register OSContext * context, register u32 newpc, register u32 newsp)
{
add newpc, newpc, #4
str newpc, [context, #64 ]
str newsp, [context, #68 ]
sub newsp, newsp, #0x40
tst newsp, #4
subne newsp, newsp, #4
str newsp, [context, #56 ]
ands r1, newpc, #1
movne r1, #0x1f | 0x20
moveq r1, #0x1f | 0x0
str r1, [context, #0 ]
mov r1, #0
str r1, [context, #4 ]
str r1, [context, #8 ]
str r1, [context, #12 ]
str r1, [context, #16 ]
str r1, [context, #20 ]
str r1, [context, #24 ]
str r1, [context, #28 ]
str r1, [context, #32 ]
str r1, [context, #36 ]
str r1, [context, #40 ]
str r1, [context, #44 ]
str r1, [context, #48 ]
str r1, [context, #52 ]
str r1, [context, #60 ]
bx lr
}
