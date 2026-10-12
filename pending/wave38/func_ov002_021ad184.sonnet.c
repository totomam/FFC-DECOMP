#include "ffc/types.h"

extern void *func_ov002_021aa820(void *);
extern void *func_0205681c(uint32_t);
extern void func_02055914(void *, void *);
extern char data_020abf58[];

typedef struct Obj {
    void *vt;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
    uint8_t f24;
    uint8_t f25;
} Obj;

static inline void init(Obj *o, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint8_t f, uint8_t g)
{
    o->f8 = 0;
    o->fc = 0x1010e;
    o->vt = data_020abf58;
    o->f10 = a; o->f14 = b; o->f18 = c; o->f1c = d; o->f20 = e;
    o->f24 = f; o->f25 = g;
}

void func_ov002_021ad184(uint8_t *p)
{
    Obj *obj;
    if (*(void **)(p + 0x14) != 0) {
        *(void **)(p + 0x24) = func_ov002_021aa820(*(void **)(p + 0x14));
    }
    obj = (Obj *)func_0205681c(0x28);
    if (obj != 0) {
        init(obj, *(uint32_t *)(p + 0x1c), *(uint32_t *)(p + 0x20), *(uint32_t *)(p + 0x24), *(uint32_t *)(p + 0x28), *(uint32_t *)(p + 0x2c), *(uint8_t *)(p + 0x30), *(uint8_t *)(p + 0x31));
    }
    func_02055914(*(void **)(p + 0x18), obj);
    *(uint32_t *)(p + 0xc) = (*(uint32_t *)(p + 0xc) & 0xFFFFFF00) | 2;
}
