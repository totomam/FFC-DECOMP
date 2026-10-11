#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t);

extern uint8_t *data_ov000_0217096c;
extern uint32_t func_ov000_0215b6dc(uint32_t);

void func_ov000_02164180(uint32_t a, uint32_t b) {
    fn_t f = *(fn_t *)(data_ov000_0217096c + 0x70c);
    if (f != 0) {
        uint32_t v = func_ov000_0215b6dc(a);
        uint32_t d = *(uint32_t *)(data_ov000_0217096c + 0x71c);
        f = *(fn_t *)(data_ov000_0217096c + 0x70c);
        f(b, v, d);
    }
}
