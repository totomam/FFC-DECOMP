/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern void *func_0205681c(uint32_t n);
extern void func_0206aa58(void *p, uint32_t a, uint32_t b, uint32_t d, uint32_t e, uint32_t f);
extern uint8_t data_ov003_02179524[];
void *func_ov003_0214a518(uint32_t a, P b, uint32_t d, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5, uint32_t s6, uint32_t s7, uint32_t s8)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x68);
    uint32_t u;
    if (p != 0) {
        func_0206aa58(p, 0, s8, u, s4, s5);
        p[0] = (uint32_t)data_ov003_02179524;
        p[0x38/4] = a;
        *(P*)(p + 0x3c/4) = b;
        p[0x44/4] = d;
        p[0x48/4] = s0;
        p[0x4c/4] = s1;
        p[0x50/4] = s2;
        p[0x54/4] = s3;
        p[0x58/4] = s4;
        p[0x5c/4] = s5;
        p[0x60/4] = s6;
        p[0x64/4] = s7;
    }
    return p;
}
