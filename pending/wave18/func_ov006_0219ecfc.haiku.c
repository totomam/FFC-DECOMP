#include "ffc/types.h"

extern uint32_t func_ov006_0219ed24(uint32_t a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern uint8_t data_ov006_021ba49c[];

uint8_t func_ov006_0219ecfc(uint32_t a, uint32_t b)
{
    return (uint8_t)~func_ov006_0219ed24(~0u, a, b, 0, data_ov006_021ba49c);
}
