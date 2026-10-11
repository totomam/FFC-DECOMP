#include "ffc/types.h"

extern uint32_t func_ov006_021b42f8(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021a6614(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021a3cc0(void);
extern void func_ov006_021b45b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern void func_ov006_021b4690(uint32_t a);
extern uint32_t data_ov006_021bc738;

void func_ov006_021a3bfc(uint32_t p)
{
    uint32_t h = func_ov006_021b42f8(0, 0);
    uint32_t m = func_ov006_021a6614(data_ov006_021bc738, p);
    uint32_t t = func_ov006_021a3cc0();
    func_ov006_021b45b0(h, 0xd, 0x28, 0xe6, 0x70, 2, t, m);
    func_ov006_021b4690(h);
}
