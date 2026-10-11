#include "ffc/types.h"

extern void func_0205428c(uint32_t v);

void func_ov002_0219679c(uint8_t *p)
{
    uint32_t flag;
    if (p[0x94]) {
        flag = 1 << 24;
    } else {
        flag = 0;
    }
    func_0205428c((*(uint32_t *)(p + 0x90)) + 5 | flag);
}
