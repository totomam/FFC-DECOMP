#include "ffc/types.h"

extern void func_02021338(uint32_t x);
extern void func_ov007_0219ea28(void *p);

void func_ov007_0219ef84(void *p)
{
    void *o = *(void **)((uint8_t *)p + 0x98);
    void **vt = *(void ***)o;
    ((void (*)(void *, int, int))vt[0x38 / 4])(o, 4, 1);
    func_02021338(0xb3);
    func_ov007_0219ea28(*(void **)((uint8_t *)p + 0x94));
}
