#include "ffc/types.h"

extern uint32_t func_ov002_021aa778(const void *object);
extern void func_ov002_021a10d4(void *out, uint32_t x, uint32_t y);
extern void func_ov002_021a51e4(void *list, void *item, uint32_t v);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint8_t pad[0xb8];
    Pair *base;
    uint32_t count;
    uint32_t cap;
} Obj;

void func_ov002_021a1af8(void *self, const void *p1, const void *p2)
{
    Obj *o = (Obj *)self;
    uint8_t v = 0;
    Pair tmp;
    uint32_t x;
    uint32_t y;

    if (p1 == 0 || p2 == 0) {
        return;
    }

    x = func_ov002_021aa778(p1);
    y = func_ov002_021aa778(p2);
    func_ov002_021a10d4(&tmp, x, y);

    if (o->count < o->cap) {
        uint32_t idx = o->count;
        o->count = idx + 1;
        o->base[idx] = tmp;
    } else {
        func_ov002_021a51e4(&o->base, &tmp, v);
    }
}
