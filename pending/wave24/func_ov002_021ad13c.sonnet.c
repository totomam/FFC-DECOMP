#include "ffc/types.h"
extern void *func_0205681c(uint32_t size);
extern void func_02055914(void *p);
extern uint32_t data_020ac318[];
typedef struct { uint32_t *vt; uint32_t a; uint32_t b; uint32_t c; uint32_t d; uint32_t e; uint8_t f; } Obj;
static inline void base(Obj *o, uint32_t d, uint32_t e, uint8_t f)
{
    o->b = 0; o->c = 0x10119; o->vt = data_020ac318;
    o->d = d; o->e = e; o->f = f;
}
static inline Obj *init(Obj *o, uint8_t *p)
{
    if (o) base(o, *(uint32_t *)(p + 0x18), *(uint32_t *)(p + 0x1c), p[0x20]);
    return o;
}
void func_ov002_021ad13c(uint8_t *p)
{
    Obj *o = init((Obj *)func_0205681c(0x1c), p);
    func_02055914(*(void **)(p + 0x14));
    {
        uint32_t v = *(uint32_t *)(p + 0xc);
        *(uint32_t *)(p + 0xc) = (v & ~0xffu) | 2;
    }
}
