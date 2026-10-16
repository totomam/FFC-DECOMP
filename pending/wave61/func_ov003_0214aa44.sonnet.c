/* cflags: -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t a, b; } P;
extern void *func_0205681c(uint32_t n);
extern void func_0206aa58(void *p, uint32_t a, uint32_t b, uint32_t c, P pr);
extern uint32_t data_ov003_0217947c;
void *func_ov003_0214aa44(uint32_t a0, P q, uint32_t a3, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, P pr, uint32_t s6, uint32_t s7, uint32_t s8, uint32_t s9, uint32_t s10)
{
    uint32_t *p = (uint32_t *)func_0205681c(0x70);
    if (p != 0) {
        func_0206aa58(p, 0, s10, 0, pr);
        p[0] = (uint32_t)&data_ov003_0217947c;
        p[0x38/4] = a0; p[0x3c/4] = q.a; p[0x40/4] = q.b; p[0x44/4] = a3;
        p[0x48/4] = s0; p[0x4c/4] = s1; p[0x50/4] = s2; p[0x54/4] = s3;
        p[0x58/4] = pr.a; p[0x5c/4]=pr.b; p[0x60/4] = s6; p[0x64/4] = s7;
        p[0x68/4] = s8; p[0x6c/4] = s9;
    }
    return p;
}
