#include "ffc/types.h"
typedef struct { int32_t fn; int32_t adj; } MP;
typedef struct {
  uint8_t pad0[0xc]; uint32_t st; uint8_t pad1[0x74];
  uint8_t *obj; MP mp; uint32_t a1; uint8_t a2; uint8_t pad2[3]; uint32_t a3; uint32_t a4; uint32_t a5; uint8_t a6;
} S;
typedef void (*F)(void *, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
void func_0203f2b4(S *p)
{
    MP *m = &p->mp;
    int32_t adj = m->adj;
    uint8_t *o = p->obj + (adj >> 1);
    F fn;
    if (adj & 1) fn = *(F *)(*(uint8_t **)o + m->fn);
    else fn = (F)m->fn;
    fn(o, p->a1, p->a2, p->a3, p->a4, p->a5, p->a6);
    p->st = (p->st & ~0xffu) | 2;
}
