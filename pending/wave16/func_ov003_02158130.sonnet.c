#include "ffc/types.h"

extern void func_ov003_02157b6c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint8_t data_ov003_021d4e68;

void func_ov003_02158130(uint32_t a, uint32_t b, uint32_t c)
{
    data_ov003_021d4e68 = 1;
    func_ov003_02157b6c(a, b, c, 1 << 12, 0, 0, 0);
    data_ov003_021d4e68 = 0;
}
