#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov007_021a3fb4(uint8_t *p)
{
    if (p[0xfc] != 0) {
        p[0xfc] = 0;
        return;
    }
    func_02021338(0xcd);
}
