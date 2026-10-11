#include "ffc/types.h"

extern void func_02053d94(void *out, void *begin, void *end, uint32_t v);

typedef struct {
    void *begin;
    uint32_t count;
} Span;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Triple;

void *func_0205360c(void *out, Span *src)
{
    uint8_t tmp;
    Triple *o = (Triple *)out;
    uint32_t *q;
    o->a = 0;
    o->b = 0;
    o->c = 0;
    func_02053d94(out, src->begin, (uint8_t *)src->begin + (src->count << 4), tmp);
    q = (uint32_t *)((uint8_t *)out + 0xc);
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    return out;
}
