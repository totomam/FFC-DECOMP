#include "ffc/types.h"
typedef struct { uint32_t a, b; } Pair;
typedef void (*fn_t)(void *, uint32_t, Pair, uint32_t, uint32_t, uint32_t);
typedef struct { uint32_t fn; int32_t adj; } MP;
typedef struct {
    uint8_t pad0[0xc]; uint32_t st;
    uint8_t pad1[0x84-0x10]; uint8_t *obj; MP mp; uint32_t a90; Pair pr; uint32_t s0, s1, s2;
} S;
void func_ov003_0215bdd8(S *p)
{
    fn_t fn;
    MP *m = &p->mp;
    int32_t adj = m->adj;
    uint8_t *base = p->obj;
    uint8_t *o = base + (adj >> 1);
    if (adj & 1) fn = *(fn_t *)(*(uint8_t **)o + m->fn);
    else fn = (fn_t)m->fn;
    fn(o, p->a90, p->pr, p->s0, p->s1, p->s2);
    p->st = (p->st & ~0xffu) | 2;
}
