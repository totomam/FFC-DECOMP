#include "ffc/types.h"
extern uint32_t data_ov003_0217ac2c;
typedef struct S {
    uint32_t *vt; uint32_t r1, r2; uint32_t lo : 8; uint32_t hi : 24;
    uint32_t r4, f5, f6, f7, f8, f9, fa, fb, fc, fd, fe, ff;
} S;
void func_ov003_02165a84(S *p, uint32_t a, uint32_t b, uint32_t c, uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4, uint32_t s5, uint32_t s6)
{
    p->f5 = a;
    p->f6 = b;
    p->f8 = s0;
    p->f9 = s1;
    *((uint8_t *)p + 0x38) = 0;
    p->ff = s6;
    p->fa = s2;
    p->fb = s3;
    p->lo = 0;
    p->fc = s4;
    p->vt = &data_ov003_0217ac2c;
    p->f7 = c;
    p->fd = s5;
}
