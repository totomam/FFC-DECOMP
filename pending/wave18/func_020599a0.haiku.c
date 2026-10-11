#include "ffc/types.h"

extern uint64_t func_0209a978(uint32_t x, uint32_t idx);
extern void func_0204fb68(void *a, uint32_t b);

void func_020599a0(uint8_t *self, void *a, uint32_t b) {
    uint32_t idx = *(uint32_t *)(self + 0x50);
    if (idx != 0) {
        idx = (uint32_t)(func_0209a978(b, idx) >> 32);
        func_0204fb68(a, *(uint32_t *)(self + (idx << 2) + 0x38));
    }
}
