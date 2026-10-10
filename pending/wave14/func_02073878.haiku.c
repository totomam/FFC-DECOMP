#include "ffc/types.h"

extern uint32_t func_02073870(void);
extern uint32_t func_ov000_0215b534(uint32_t x);

uint32_t func_02073878(void) {
    uint32_t n = func_02073870();
    uint32_t r = func_ov000_0215b534(n);
    return r & ~(1u << n);
}
