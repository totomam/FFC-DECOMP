#include "ffc/types.h"

extern uint32_t func_0208d8c8(uint32_t x);
extern void func_ov006_0219c99c(uint32_t a, uint32_t b);
extern uint8_t data_ov006_021ba150[];

uint32_t func_ov006_0219c620(void)
{
    uint8_t *base = (uint8_t *)data_ov006_021ba150;
    uint8_t *p = *(uint8_t **)(base + 0xc);
    uint32_t r4 = func_0208d8c8(*(uint32_t *)(p + 0x508));
    func_ov006_0219c99c(1, r4);
    if (r4 == 2) {
        r4 = 0;
    }
    return r4;
}
