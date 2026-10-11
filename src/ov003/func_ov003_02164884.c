#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern uint32_t func_ov003_0214649c(uint32_t x);
extern void func_ov003_02153e10(uint32_t *out, uint32_t v);

void func_ov003_02164884(uint8_t *p) {
    uint32_t h;
    if (*(uint32_t *)(p + 0x90) == 0x80000000u) {
        h = func_020424e0(*(uint32_t *)(p + 0x80));
        if (h != 0 && func_ov003_0214649c(h) != 0) {
            uint32_t tmp;
            func_ov003_02153e10(&tmp, func_ov003_0214649c(h));
            *(uint32_t *)(p + 0x90) = tmp;
        } else {
            *(uint32_t *)(p + 0x90) = 0x1000u;
        }
    }
}
