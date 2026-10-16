#include "ffc/types.h"
extern uint32_t data_ov003_0217a774;
typedef struct S { uint32_t vt; uint32_t p4, p8; uint32_t c; uint32_t d; uint32_t f14, f18, f1c; uint16_t f20, f22, f24, f26; } S;
typedef struct A { uint32_t a, b; uint32_t pad; uint16_t c; uint16_t padc; uint16_t d; uint16_t padd; uint8_t e; } A;
S* func_ov003_02164114(S *p, uint32_t x, uint16_t y, uint16_t z, A s) {
    uint8_t *q = (uint8_t*)p;
    p->f14 = x;
    p->f18 = s.a;
    p->c &= ~0xff;
    p->f1c = s.b;
    p->vt = (uint32_t)&data_ov003_0217a774;
    p->f22 = z;
    p->f20 = y;
    p->f24 = s.c;
    p->f26 = s.d;
    q += 0x28;
    *q = s.e;
    return p;
}
