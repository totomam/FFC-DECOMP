#include "ffc/types.h"

typedef struct {
    uint32_t f00;
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
    uint8_t pad30[8];
    uint8_t flag;
} S;

void func_02097cc8(S *p) {
    uint32_t a;
    uint32_t t;
    p->f04 = 0;
    p->f08 = 0;
    p->f0c = 0;
    a = p->f20;
    if (p->flag) {
        t = p->f1c;
        p->f14 = a;
        p->f10 = a;
        p->f18 = a + t - 1;
    } else {
        p->f14 = a;
        p->f10 = a;
        p->f18 = a;
    }
    p->f28 = p->f20;
    p->f24 = p->f20;
    p->f2c = p->f20 + p->f1c;
}
