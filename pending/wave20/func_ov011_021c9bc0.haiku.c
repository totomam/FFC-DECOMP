#include "ffc/types.h"

extern void func_ov011_021c8af0(void *p);
extern void func_02021338(uint32_t v);

void func_ov011_021c9bc0(uint8_t *p)
{
    void *obj = *(void **)(p + 0x98);
    void **vt = *(void ***)obj;
    ((void (*)(void *, int, int))vt[14])(obj, 3, 1);
    func_ov011_021c8af0(*(void **)(p + 0x94));
    func_02021338(0x193);
}
