#include "ffc/types.h"

extern uint32_t func_0206cb98(uint32_t);
extern void func_ov007_021a3634(void *);
extern void func_020559d4(void *);

void func_ov007_021a3fd0(uint8_t *p)
{
    if (func_0206cb98(*(uint32_t *)(p + 0xf0)) != 0) {
        func_ov007_021a3634(p);
    } else {
        func_020559d4(p + 0xb8);
    }
}
