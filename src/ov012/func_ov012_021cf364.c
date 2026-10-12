#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c4c(void *p);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void *data_ov012_021d3c4c[];

void func_ov012_021cf364(uint8_t *self, uint8_t *obj)
{
    uint32_t t[2];
    void *o;
    uint32_t n;

    if (obj == 0) {
        return;
    }
    n = *(uint32_t *)(obj + 0x98);
    if (n >= 0xf0) {
        return;
    }
    func_02056c4c(*(void **)(self + 0x2c4));
    func_02056c4c(*(void **)(self + 0x2bc));
    n = *(uint32_t *)(obj + 0x98);
    if (n >= 2) {
        return;
    }
    o = func_0203b95c(data_ov012_021d3c4c[n], *(void **)(self + 0xb8), 0, 1);
    *(void **)(self + 0x2b4) = o;
    ((void (*)(void *, uint32_t, uint32_t))(*(uint32_t **)o)[0x38 / 4])(o, 1, 0);
    t[0] = *(uint32_t *)(obj + 0xa0);
    t[1] = *(uint32_t *)(obj + 0xa4);
    ((void (*)(void *, Pair))(*(uint32_t **)(*(void **)(self + 0x2b4)))[0xc / 4])(*(void **)(self + 0x2b4), *(Pair *)t);
    ((void (*)(void *, uint32_t))(*(uint32_t **)(*(void **)(self + 0x2b4)))[0x20 / 4])(*(void **)(self + 0x2b4), 1);
    ((void (*)(void *))(*(uint32_t **)(*(void **)(self + 0x2b4)))[0x28 / 4])(*(void **)(self + 0x2b4));
    func_02056bc0(*(void **)(self + 0x2bc), *(void **)(self + 0x2b4));
    {
        uint32_t x = *(uint32_t *)(obj + 0xa4);
        uint32_t y = *(uint32_t *)(obj + 0xa0);
        *(uint32_t *)(self + 0x2cc) = y;
        *(uint32_t *)(self + 0x2d0) = x;
    }
    self[0x2e4] = obj[0xbc];
    self[0x2e5] = obj[0xbd];
}
