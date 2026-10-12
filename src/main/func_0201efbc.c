#include "ffc/types.h"

extern void func_0201ed64(uint32_t a, uint32_t b);
extern uint32_t func_02019760(uint32_t p);
extern uint32_t func_0201ed9c(uint32_t a, uint32_t b);
extern void func_0201edf0(uint32_t a, uint32_t b, uint32_t *out, uint32_t n, uint32_t v);
extern uint32_t data_020b8e44;

void func_0201efbc(uint32_t a, uint32_t b) {
    uint32_t tmp;
    uint32_t r6;
    func_0201ed64(a, b);
    r6 = func_02019760(data_020b8e44);
    if (func_0201ed9c(a, b) == 0) {
        do {
            func_0201edf0(a, b, &tmp, 2, r6);
        } while (func_0201ed9c(a, b) == 0);
    }
}
