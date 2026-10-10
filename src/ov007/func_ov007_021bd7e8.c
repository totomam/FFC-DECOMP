#include "ffc/types.h"

extern uint8_t data_ov007_021c81cc[];
extern void func_020740f0(uint32_t a, void *b, uint32_t c);

void func_ov007_021bd7e8(uint8_t *p)
{
    func_020740f0(*(uint32_t *)(p + 0xb0), data_ov007_021c81cc, *(uint32_t *)(p + 0x1d4));
}
