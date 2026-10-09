#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov007_0219b4c0(uint8_t *p)
{
    if (p[0xd8] != 0) {
        p[0xd8] = 0;
        return;
    }
    func_02021338(0xcd);
}
