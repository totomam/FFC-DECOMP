#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_02056aec(void *p);
extern void *func_02062a78(void *obj, uint32_t a, uint32_t b, Pair pair, uint32_t e, uint32_t f);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov002_021d3a98[];
extern uint32_t data_ov002_021d5030[];

void func_ov002_0219cf0c(uint8_t *a)
{
    uint32_t loc[4];
    uint32_t *q;
    void *r6;
    void *r0;
    uint8_t *n;
    uint32_t v;
    uint32_t *d;

    r6 = func_02056aec(*(void **)(a + 0x8c));
    v = data_ov002_021d3a98[1 - *(uint32_t *)(a + 0x88)];
    loc[0] = v;
    loc[1] = 0;
    loc[2] = 0;
    loc[3] = 0;
    q = &loc[2];
    r0 = func_02062a78(*(void **)(a + 0x8c), q[0], q[1], *(Pair *)loc, 0x28, 2);
    n = a + 0x14;
    func_02056bc0(n, r0);
    func_02056bc0(n, r6);
    d = data_ov002_021d5030;
    *(uint32_t *)(a + 0x80) = d[0];
    *(uint32_t *)(a + 0x84) = d[1];
}
