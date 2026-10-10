#include "ffc/types.h"

extern uint8_t data_ov001_02194450[];
extern void func_02086b04(uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);

void func_ov001_02188e98(uint32_t a)
{
    func_02086b04(a, 0x21, data_ov001_02194450, 5, 3);
}
