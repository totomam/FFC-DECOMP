#include "ffc/types.h"

extern uint32_t func_ov003_02146494(uint32_t);
extern uint32_t func_ov003_021464f4(uint32_t, uint32_t);
extern uint32_t *func_ov003_02155b40(uint32_t);
extern void func_ov003_02155b44(uint32_t *, uint32_t);

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov003_0214818c(Pair *, uint32_t, Pair, float, uint32_t);

void func_ov003_02160960(uint8_t *self) {
    Pair in;
    Pair res;
    uint32_t tt;
    uint32_t b;
    uint32_t e;
    uint32_t *f;
    Pair *p;

    b = func_ov003_02146494(*(uint32_t *)(self + 0x80));
    e = func_ov003_021464f4(*(uint32_t *)(self + 0x80), *(uint32_t *)(b + 0xb0));

    f = func_ov003_02155b40(e);
    p = (Pair *)&f[2];
    in.a = p->a;
    in.b = p->b;

    func_ov003_02155b44(&tt, e);

    func_ov003_0214818c(&res, *(uint32_t *)(self + 0x80), in, 0.8f, tt);

    in.a = res.a;
    in.b = res.b;

    f = func_ov003_02155b40(e);
    p = (Pair *)&f[2];
    p->a = in.a;
    p->b = in.b;
}
