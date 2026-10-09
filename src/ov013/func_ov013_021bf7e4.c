#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov013_021bf7e4(uint8_t *p)
{
    if (p[0xd8] != 0) {
        p[0xd8] = 0;
        return;
    }
    func_02021338(0xcd);
}
