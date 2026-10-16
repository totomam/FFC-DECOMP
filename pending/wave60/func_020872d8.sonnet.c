/* cflags: -nothumb -noO4,p -O4 */
#include "ffc/types.h"
typedef struct { uint32_t f[0x12]; } S;
void func_020872d8(S *p, uint8_t *a, uint32_t b)
{
    uint32_t t;
    a += 4;
    p->f[0x10] = (uint32_t)a;
    p->f[0x11] = b;
    t = b - 0x40;
    if (t & 4) t -= 4;
    p->f[0xe] = t;
    a = (uint8_t*)((uint32_t)a & 1);
    if (a) t = 0x3f; else t = 0x1f;
    p->f[0] = t;
    p->f[1] = 0; p->f[2] = 0; p->f[3] = 0; p->f[4] = 0; p->f[5] = 0; p->f[6] = 0; p->f[7] = 0;
    p->f[8] = 0; p->f[9] = 0; p->f[10] = 0; p->f[11] = 0; p->f[12] = 0; p->f[13] = 0; p->f[15] = 0;
}
