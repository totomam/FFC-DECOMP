#include "ffc/types.h"

extern void *func_0207caa4(void *p);

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
} S;

int func_0207f9d0(void *a, void *b) {
    S *s = (S *)b;
    uint8_t *r = (uint8_t *)func_0207caa4(a);
    uint32_t z = 0;
    s->f20 = z;
    s->f24 = z;
    s->f28 = z;
    s->f2c = z;
    s->f00 = *(uint32_t *)(r + 0x80);
    s->f04 = z;
    s->f08 = z;
    s->f0c = z;
    s->f10 = 0x7fffffff;
    s->f14 = z;
    s->f18 = 0x7fffffff;
    s->f1c = z;
    return 0;
}
