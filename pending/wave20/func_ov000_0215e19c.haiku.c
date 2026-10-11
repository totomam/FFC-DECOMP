#include "ffc/types.h"

extern void func_ov000_0216333c(uint32_t a);
extern void func_ov000_021591a8(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov000_02161848(void);
extern uint32_t data_ov000_0217020c[];

void func_ov000_0215e19c(void)
{
    uint32_t v;

    func_ov000_0216333c(0);
    v = data_ov000_0217020c[3];
    if (v != 0) {
        func_ov000_021591a8(4, v, 0);
        data_ov000_0217020c[3] = 0;
    }
    func_ov000_02161848();
}
