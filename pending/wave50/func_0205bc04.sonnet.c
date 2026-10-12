#include "ffc/types.h"
typedef struct { uint32_t *base; uint32_t start; uint32_t count; uint32_t cap; } RingSub;
typedef struct { uint32_t f0; uint32_t f4; RingSub ring; } RingCtx;
typedef struct { uint32_t *cur; uint32_t *base; uint32_t *b2; uint32_t *lim; } It;
extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02056844(uint32_t v);
extern void func_0205c804(RingSub *s);
static inline void mk(It *i, RingSub *s, uint32_t idx)
{
    uint32_t *c = s->base + idx;
    i->cur = c; i->base = s->base; i->b2 = c; i->lim = s->base + s->cap;
}
RingCtx *func_0205bc04(RingCtx *p)
{
    RingSub *s = &p->ring;
    uint32_t n = 0;
    p->f4 = 0;
    if (s->count != 0) {
        It a, b;
        if (s->cap != 0)
            n = (uint32_t)(func_0209a978(s->start + s->count, s->cap) >> 32);
        mk(&b, s, n);
        mk(&a, s, s->start);
        while (a.cur != b.cur) {
            if (*a.cur != 0) func_02056844(*a.cur);
            a.cur++;
            if (a.cur == a.lim) a.cur = a.base;
        }
    }
    func_0205c804(s);
    return p;
}
