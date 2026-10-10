#include "ffc/types.h"

extern uint64_t func_020882cc(void);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);

uint64_t func_ov000_0216591c(void) {
    uint64_t x = func_020882cc();
    return func_0209a6d4(x << 6, 0x82eaULL);
}
