#include "ffc/types.h"

extern void func_ov003_02151434(uint32_t x);

void func_ov003_02151830(uint8_t *p)
{
    func_ov003_02151434(*(uint32_t *)(p + 0x88));
}
