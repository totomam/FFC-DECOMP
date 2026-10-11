#include "ffc/types.h"

extern uint32_t func_ov006_0219ed24(int a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern uint8_t data_ov006_021ba49c[];

static inline uint32_t inv(uint32_t x) { return ~x; }

uint8_t func_ov006_0219ecfc(uint32_t a, uint32_t b)
{
    uint32_t r = func_ov006_0219ed24(-1, a, b, 0, data_ov006_021ba49c);
    return (uint8_t)(inv(r));
}
