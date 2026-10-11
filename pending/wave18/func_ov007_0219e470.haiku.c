#include "ffc/types.h"

extern void func_02021338(int32_t arg);

void func_ov007_0219e470(void *p)
{
    uint8_t *b = (uint8_t *)p;
    *(uint32_t *)(b + 0xd0) = 0;
    if (b[0xd4] != 0) {
        b[0xd4] = 0;
        return;
    }
    func_02021338(0xcd);
}
