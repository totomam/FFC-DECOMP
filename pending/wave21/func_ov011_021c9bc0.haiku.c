#include "ffc/types.h"

extern void func_ov011_021c8af0(void *p);
extern void func_02021338(uint32_t v);

typedef void (*vfn_t)(void *, int, int);

void func_ov011_021c9bc0(uint8_t *p)
{
    void *o = *(void **)(p + 0x98);
    vfn_t f = *(vfn_t *)((uint8_t *)(*(void **)o) + 0x38);
    f(o, 3, 1);
    func_ov011_021c8af0(*(void **)(p + 0x94));
    func_02021338(0x193);
}
