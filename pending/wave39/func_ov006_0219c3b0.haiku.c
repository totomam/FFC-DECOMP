#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern uint32_t func_ov006_0219c36c(uint32_t a, uint32_t b, uint32_t c);
extern uint8_t data_ov006_021ba150[];

uint32_t func_ov006_0219c3b0(uint32_t a, uint32_t b)
{
    uint32_t s;
    uint8_t *p;

    s = func_02088978();
    p = *(uint8_t **)(data_ov006_021ba150 + 0xc);
    if (p[0x50d] != 0) {
        func_0208898c(s);
        return 0;
    }
    if (func_ov006_0219c36c(a, 8, b) == 0) {
        func_0208898c(s);
        return 0;
    }
    p = *(uint8_t **)(data_ov006_021ba150 + 0xc);
    *(uint16_t *)(p + 0x10) = (uint16_t)b;
    p = *(uint8_t **)(data_ov006_021ba150 + 0xc);
    *(uint16_t *)(p + 0x500) = (uint16_t)a;
    p = *(uint8_t **)(data_ov006_021ba150 + 0xc);
    *(uint16_t *)(p + 0x502) = 8;
    func_0208898c(s);
    return 1;
}
