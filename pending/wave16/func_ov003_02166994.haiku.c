#include "ffc/types.h"

extern uint8_t data_ov003_0217aac4[];

typedef struct {
    uint8_t *vt;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint16_t f18;
    uint16_t f1a;
    uint32_t f1c;
    uint32_t f20;
} FooStruct;

void func_ov003_02166994(void *p, uint32_t a, uint16_t b, uint16_t c, uint32_t e, uint32_t f)
{
    FooStruct *s = (FooStruct *)p;
    s->f14 = a;
    s->f1c = e;
    s->f0c &= ~0xffu;
    s->vt = data_ov003_0217aac4;
    s->f18 = b;
    s->f1a = c;
    s->f20 = f;
}
