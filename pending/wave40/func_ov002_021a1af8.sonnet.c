#include "ffc/types.h"

extern uint32_t func_ov002_021aa778(const void *object);
extern void func_ov002_021a10d4(void *out, uint32_t x, uint32_t y);
extern void func_ov002_021a51e4(void *list, void *item, uint32_t v);

typedef struct { uint32_t a; uint32_t b; } Pair;
typedef union { uint8_t b; uint32_t w; } U;
typedef struct {
    uint8_t pad[0xb8];
    Pair *base;
    uint32_t count;
    uint32_t cap;
} Obj;

void func_ov002_021a1af8(void *self, const void *p1, const void *p2)
{
    Obj *o = (Obj *)self;
    Pair tmp;
    uint8_t z = 0;
    uint32_t x, y, n;

    if (p1 == 0 || p2 == 0) return;
    x = func_ov002_021aa778(p1);
    y = func_ov002_021aa778(p2);
    func_ov002_021a10d4(&tmp, x, y);
    if (o->count < o->cap) {
        o->count = o->count + 1;
        n = o->count - 1;
        o->base[n] = tmp;
    } else {
        U u;
        uint8_t *pz = &z;
        u.b = *pz;
        func_ov002_021a51e4(&o->base, &tmp, u.w);
    }
}
