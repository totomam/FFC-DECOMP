#include "ffc/types.h"

extern uint8_t data_ov006_021ba150[];
extern uint32_t func_0208d8c8(uint32_t x);
extern void func_ov006_0219c99c(uint32_t a, uint32_t b);

uint32_t func_ov006_0219c620(void)
{
    uint32_t r;
    uint8_t *p = *(uint8_t **)(data_ov006_021ba150 + 0xc);
    r = func_0208d8c8(*(uint32_t *)(p + 0x508));
    func_ov006_0219c99c(1, r);
    if (r == 2) {
        r = 0;
    }
    return r;
}
