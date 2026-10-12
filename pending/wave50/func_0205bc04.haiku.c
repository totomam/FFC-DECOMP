#include "ffc/types.h"

typedef struct {
    uint32_t *base;
    uint32_t start;
    uint32_t count;
    uint32_t cap;
} RingSub;

typedef struct {
    uint32_t f0;
    uint32_t f4;
    RingSub ring;
} RingCtx;

extern uint64_t func_0209a978(uint32_t a, uint32_t b);
extern void func_02056844(uint32_t v);
extern void func_0205c804(RingSub *s);

RingCtx *func_0205bc04(RingCtx *p)
{
    RingSub *s = &p->ring;
    uint32_t *it;
    uint32_t *end;
    uint32_t n = 0;

    p->f4 = 0;
    if (s->count != 0) {
        if (s->cap != 0) {
            n = (uint32_t)(func_0209a978(s->start + s->count, s->cap) >> 32);
        }
        it = s->base + s->start;
        end = s->base + n;
        while (it != end) {
            if (*it != 0) {
                func_02056844(*it);
            }
            it++;
            if (it == s->base + s->cap) {
                it = s->base;
            }
        }
    }
    func_0205c804(s);
    return p;
}
