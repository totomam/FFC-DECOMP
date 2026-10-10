#include "ffc/types.h"

extern uint32_t func_ov000_02145614(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_021456d4(uint32_t a);

uint32_t func_ov000_021456e4(uint32_t a, uint32_t b) {
    return func_ov000_021456d4((uint16_t)func_ov000_02145614(a, b, 0));
}
