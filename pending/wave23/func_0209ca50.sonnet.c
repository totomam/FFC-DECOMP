#include "ffc/types.h"

extern void func_0209c2d8(void *a, void *b, uint32_t c);
extern void func_0209d220(void *a, void *b, uint32_t c);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint8_t *f18;
} Ctx;

void func_0209ca50(Ctx *c, uint32_t *p1, uint32_t *p2, uint32_t p3) {
    uint32_t *t;
    func_0209c2d8(c, p1, p3);
    t = (uint32_t *)(c->f18 + p2[2]);
    t[0] = c->f4;
    t[1] = c->f0;
    t[2] = c->f8;
    t[5] = p3;
    func_0209d220(c, p1, p1[0] + p2[1]);
}
