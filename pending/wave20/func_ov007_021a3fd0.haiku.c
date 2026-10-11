#include "ffc/types.h"

extern int32_t func_0206cb98(uint32_t x);
extern void func_ov007_021a3634(void *p);
extern void func_020559d4(void *p);

void func_ov007_021a3fd0(void *p)
{
    if (func_0206cb98(*(uint32_t *)((uint8_t *)p + 0xf0)) != 0) {
        func_ov007_021a3634(p);
        return;
    }
    func_020559d4((uint8_t *)p + 0xb8);
}
