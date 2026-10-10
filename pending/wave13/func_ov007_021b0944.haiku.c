#include "ffc/types.h"

extern void func_ov001_0218e710(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_ov001_0218e14c(uint32_t value, uint32_t flag);

uint32_t func_ov007_021b0944(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    func_ov001_0218e710(a, b, c, d);
    return func_ov001_0218e14c(c, 1);
}
