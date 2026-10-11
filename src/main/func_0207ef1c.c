#include "ffc/types.h"

extern void func_02084ca4(uint32_t x);
extern int func_0207dcc8(uint32_t a, uint32_t b);

typedef struct {
    uint8_t *obj;
    uint32_t pos;
} Ctx;

int func_0207ef1c(Ctx *c, int a1, uint32_t n) {
    uint32_t s = n;
    uint8_t *o = c->obj;
    uint8_t *t = *(uint8_t **)(o + 0x20);
    int r;
    if (*(uint32_t *)(t + 0x1c) != 0) {
        func_02084ca4(c->pos);
        r = 0;
    } else {
        uint32_t (*fn)(uint8_t *, int, uint32_t, uint32_t) = *(void **)(t + 0x20);
        uint32_t v = fn(o, a1, c->pos, s);
        r = func_0207dcc8(*(uint32_t *)(o + 8), v);
    }
    c->pos += s;
    return r;
}
