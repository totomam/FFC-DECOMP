#include "ffc/types.h"
extern uint32_t data_ov003_0217aaf4[];
typedef struct {
    void *vtbl; uint32_t f04, f08; uint32_t lo:8; uint32_t hi:24; uint32_t f10, f14, f18, f1c, f20, f24, f28, f2c, f30;
} O;

void func_ov003_02166a58(O *p, uint32_t a, uint32_t b, uint32_t c,
                         uint32_t s0, uint32_t s1, uint32_t s2, uint32_t s3, uint32_t s4) {
    p->lo = 0;
    p->vtbl = data_ov003_0217aaf4;
    p->f14 = a;
    p->f20 = s0;
    p->f24 = s1;
    p->f28 = s2;
    p->f2c = s3;
    p->f18 = b;
    p->f1c = c;
    p->f30 = s4;
}
