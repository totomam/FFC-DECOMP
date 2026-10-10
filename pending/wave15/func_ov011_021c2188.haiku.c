#include "ffc/types.h"

extern void func_ov009_0219a014(uint32_t);
extern void func_ov009_0219c000(uint32_t);

void func_ov011_021c2188(uint8_t *p)
{
    func_ov009_0219a014(*(uint32_t *)(p + 0x170));
    func_ov009_0219c000(*(uint32_t *)(p + 0x2b8));
}
