#include "ffc/types.h"

typedef struct {
    uint32_t *data;
    uint32_t aux;
    uint32_t size;
    uint32_t cap;
} Ring;

extern uint64_t func_0209a978(uint32_t idx);
extern uint32_t *func_0205be40(Ring *r, int n);
extern void func_0205c66c(Ring *tmp, uint32_t *buf, uint32_t flag);
extern void func_0205c6c4(Ring *tmp, uint32_t **rng, uint32_t **rng2, uint32_t *capref);
extern void func_0205c650(Ring *tmp);

void func_0205bd48(Ring *r, uint32_t *item)
{
    Ring tmp;
    Ring *tp;
    uint32_t *newbuf;
    uint32_t *slot;
    uint32_t *rng[2];
    uint32_t *rng2[2];
    uint32_t idx;
    uint32_t *capref;
    uint32_t zero;
    uint8_t flag;

    if (r->size + 1 < r->cap) {
        idx = (uint32_t)(func_0209a978(r->aux + r->size) >> 32);
        slot = r->data + idx;
        if (slot != 0) {
            *slot = *item;
        }
        r->size = r->size + 1;
        return;
    }

    capref = &r->cap;
    zero = 0;
    tp = &tmp;
    tp->data = 0;
    tmp.aux = zero;
    tmp.size = zero;
    tmp.cap = zero;
    newbuf = func_0205be40(r, 1);
    flag = 0;
    func_0205c66c(&tmp, newbuf, flag);
    tmp.aux = r->size;
    slot = tmp.data + tmp.aux;
    if (slot != 0) {
        *slot = *item;
    }
    tmp.size = tmp.size + 1;
    if (r->cap != 0) {
        idx = (uint32_t)(func_0209a978(r->aux + r->size) >> 32);
    } else {
        idx = zero;
    }
    rng[0] = r->data;
    rng[1] = (uint32_t *)idx;
    rng2[0] = r->data + r->aux;
    rng2[1] = r->data + r->cap;
    func_0205c6c4(tp, rng, rng2, capref);
    r->size = zero;
    {
        uint32_t *d = r->data;
        r->data = tmp.data;
        tmp.data = d;
    }
    {
        uint32_t a = r->aux;
        r->aux = tmp.aux;
        tmp.aux = a;
    }
    {
        uint32_t s = tmp.size;
        tmp.size = zero;
        r->size = s;
    }
    {
        uint32_t c = r->cap;
        r->cap = tmp.cap;
        tmp.cap = c;
    }
    func_0205c650(tp);
}
