#include "ffc/types.h"

extern uint32_t data_ov001_021952f0;
extern uint32_t data_ov001_02191b60;
extern uint32_t func_ov000_02168768(void);
extern void func_ov000_021652a8(int a, int b, int c, uint32_t *d, uint32_t e);
extern void func_ov000_02168738(uint32_t p);

void func_ov001_02182a18(void)
{
    if (data_ov001_021952f0 != 0) {
        uint32_t v = func_ov000_02168768();
        func_ov000_021652a8(7, 3, 8, &data_ov001_02191b60, v);
        func_ov000_02168738(data_ov001_021952f0);
        data_ov001_021952f0 = 0;
    }
}
