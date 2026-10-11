#include "ffc/types.h"

extern uint32_t func_ov003_0214b318(uint32_t a, uint32_t b);
extern void func_ov003_0214a57c(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_ov003_02162de0(uint32_t *p) {
    if (func_ov003_0214b318(p[0x20], 2)) {
        func_ov003_0214a57c(p[0x20], 0, 0, 2);
    }
}
