#include "ffc/types.h"

extern uint32_t data_ov003_0217aaf4[];

typedef struct {
    void *vtbl;
    uint32_t f04;
    uint32_t f08;
    uint32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
} func_ov003_02166a58_obj;

void func_ov003_02166a58(func_ov003_02166a58_obj *p, uint32_t a, uint32_t b, uint32_t c,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4) {
    p->f14 = a;
    p->f20 = s0;
    p->f24 = s1;
    p->f28 = s2;
    p->f2c = s3;
    p->f0c &= ~0xffu;
    p->vtbl = data_ov003_0217aaf4;
    p->f18 = b;
    p->f1c = c;
    p->f30 = s4;
}
