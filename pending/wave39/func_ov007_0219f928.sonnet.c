#include "ffc/types.h"

extern char data_ov007_021c36f8[];
extern char data_ov007_021c3718[];
extern void func_ov007_021a04b4(void *self);
extern void func_02056bf4(void *a, void *b);
extern void func_020695d0(void *a);
extern void func_02054a88(void *a);
extern void func_02056844(void *a);

typedef void (*VFn)(void *);

void *func_ov007_0219f928(void *p)
{
    uint8_t *self = (uint8_t *)p;
    uint32_t off = 5;
    void *o;

    *(void **)self = data_ov007_021c36f8;
    *(void **)(self + 0xc) = data_ov007_021c3718;
    func_ov007_021a04b4(self);

    off <<= 6;
    func_02056bf4((void*)((uint8_t*)(self + 0xc) + 0x48), *(void **)(self + off));
    if (*(void **)(self + off) != 0) {
      if (*(void **)(self + off) != 0) {
        o = *(void **)(self + off);
        ((VFn)((void **)*(void ***)o)[1])(o);
      }
        *(void **)(self + 0x140) = 0;
    }

    o = *(void **)(self + 0x178);
    if (o != 0) {
        ((VFn)((void **)*(void ***)o)[1])(o);
    }

    func_020695d0(self + 0xc);
    func_02054a88(self);
    func_02056844(self);
    return self;
}
