#include "ffc/types.h"

extern uint32_t func_ov006_0219a38c(void);
extern uint32_t func_ov006_021997b0(uint32_t a, uint32_t b, uint32_t c);
extern uint8_t *data_ov006_021ba160;

uint32_t func_ov006_0219977c(uint32_t a, uint32_t b, uint32_t c)
{
    if (func_ov006_0219a38c() != 0) {
        *(uint32_t *)(data_ov006_021ba160 + (a - 1) * 4 + 0x14e8) = b;
    }
    return func_ov006_021997b0(a, b, c);
}
