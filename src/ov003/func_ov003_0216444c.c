#include "ffc/types.h"

extern char data_ov003_0217a710[];

typedef struct {
    void *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint16_t h18;
    uint16_t h1a;
    uint8_t b1c;
    uint8_t b1d;
} Obj;

void func_ov003_0216444c(Obj *p, uint32_t a, uint16_t h2, uint16_t h3, uint8_t b5, uint8_t b6)
{
    p->f0c &= ~0xffu;
    p->vt = data_ov003_0217a710;
    p->f14 = a;
    p->h1a = h3;
    p->h18 = h2;
    p->b1c = b5;
    p->b1d = b6;
}
