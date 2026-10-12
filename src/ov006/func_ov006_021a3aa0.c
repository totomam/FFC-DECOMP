#include "ffc/types.h"

extern uint8_t data_ov006_021bc6ac;
extern uint8_t data_ov006_021b8c8c;
extern uint32_t data_ov006_021bc738;

extern void func_ov006_021a3b88(void *a, void *b);
extern void func_020826c4(void);
extern void *func_ov006_021b42f8(uint32_t a, uint32_t b);
extern uint32_t func_ov006_021a6624(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov006_021a3cc0(void);
extern void func_ov006_021b45b0(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void func_ov006_021b4690(void *p);

uint32_t func_ov006_021a3aa0(uint32_t a, uint32_t b, uint32_t c)
{
    if (data_ov006_021bc6ac) {
        return 0;
    }
    func_ov006_021a3b88(&data_ov006_021b8c8c, (void *)func_020826c4);
    *(uint32_t *)0x04001010 = 0x01920000;
    void *r4 = func_ov006_021b42f8(1, 0);
    uint32_t r5 = func_ov006_021a6624(data_ov006_021bc738, a, b, c);
    uint32_t r0 = func_ov006_021a3cc0();
    func_ov006_021b45b0(r4, 0x14, 0, 0xd8, 0x40, 2, r0, r5);
    func_ov006_021b4690(r4);
    data_ov006_021bc6ac = 1;
    return 1;
}
