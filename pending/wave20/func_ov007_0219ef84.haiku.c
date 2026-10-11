#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_ov007_0219ea28(void *p);

typedef void (*VFn)(void *self, uint32_t a, uint32_t b);

void func_ov007_0219ef84(uint8_t *p)
{
    void *o = *(void **)(p + 0x98);
    void **vt = *(void ***)o;
    ((VFn)vt[0x38 / 4])(o, 4, 1);
    func_02021338(0xb3);
    func_ov007_0219ea28(*(void **)(p + 0x94));
}
