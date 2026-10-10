#include "ffc/types.h"

extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov001_02178454(uint32_t first, uint32_t second, const uint8_t *third, uint32_t fourth);

uint32_t func_ov001_021784f0(uint32_t first, uint32_t second, const uint8_t *third) {
    return func_ov001_02178454(first, second, third, func_02092864(third));
}
