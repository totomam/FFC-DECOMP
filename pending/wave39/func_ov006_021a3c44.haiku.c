#include "ffc/types.h"

extern uint32_t func_ov006_021b42f8(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021a6614(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021a3cc0(void);
extern void func_ov006_021b45b0(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h);
extern uint32_t func_ov006_021a6524(void);
extern void func_ov006_021b44a4(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);
extern void func_ov006_021b4690(uint32_t a);
extern uint32_t data_ov006_021bc738;
extern uint16_t data_ov006_021b80b8[];
extern uint16_t data_ov006_021b80ba[];

void func_ov006_021a3c44(uint32_t a, uint32_t b)
{
    uint32_t r4;
    r4 = func_ov006_021b42f8(0, 0);
    uint32_t r5 = func_ov006_021a6614(data_ov006_021bc738, b);
    uint32_t t = func_ov006_021a3cc0();
    func_ov006_021b45b0(r4, 13, 0x3c, 0xe6, 0x5e, 2, t, r5);
    uint32_t i = func_ov006_021a6524();
    uint32_t j = func_ov006_021a6524();
    uint32_t aa = a; a = 0; 
    func_ov006_021b44a4(r4, data_ov006_021b80b8[i * 2], data_ov006_021b80ba[j * 2], 2, 0x209, aa);
    func_ov006_021b4690(r4);
}
