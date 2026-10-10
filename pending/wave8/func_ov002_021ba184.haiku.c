#include "ffc/types.h"

extern void func_ov002_021ba5a4(uint32_t a);
extern void func_ov002_021ba7cc(uint32_t a);

void func_ov002_021ba184(uint8_t *p)
{
    func_ov002_021ba5a4(*(uint32_t *)(p + 0x88));
    func_ov002_021ba7cc(*(uint32_t *)(p + 0x84));
}
