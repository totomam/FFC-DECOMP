#include "ffc/types.h"

typedef struct {
    uint32_t *p0;
    uint32_t p1;
    uint32_t p2;
} G;

extern uint32_t func_ov000_02151610(uint32_t x);
extern uint32_t func_ov000_0215917c(uint32_t a, uint32_t b);
extern void func_02084b2c(void *p, uint32_t v, uint32_t n);
extern G data_ov000_0216e288;

int func_ov000_021539cc(uint32_t a, uint32_t b)
{
    data_ov000_0216e288.p1 = func_ov000_0215917c(1, func_ov000_02151610(a));
    data_ov000_0216e288.p0 = (uint32_t *)func_ov000_0215917c(1, 0x794);
    func_02084b2c(data_ov000_0216e288.p0, 0, 0x794);
    *data_ov000_0216e288.p0 = a;
    *(uint16_t *)((uint8_t *)data_ov000_0216e288.p0 + 4) = (uint16_t)b;
    data_ov000_0216e288.p2 = 0;
    return 1;
}
