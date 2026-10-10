#include "ffc/types.h"

extern void func_ov000_021652a8(int a, int b, int c, void *d);
extern uint8_t data_ov001_02193514[];
extern uint8_t *data_ov001_021926dc;

void func_ov001_02183df0(uint8_t *p, uint32_t v)
{
    func_ov000_021652a8(3, 4, 0x40, data_ov001_02193514);
    if (p == 0) {
        p = data_ov001_021926dc;
    }
    *(uint32_t *)(p + 0xa0) = v;
}
