#include "ffc/types.h"

extern void func_ov002_021aa200(uint32_t a, uint32_t b, uint32_t c);

void func_ov002_021aa1d8(uint32_t a, uint32_t mask, uint32_t c) {
    int32_t i;
    for (i = 1; i < 13; i++) {
        if (i != 1 && (mask & (1u << i))) {
            func_ov002_021aa200(a, i, c);
        }
    }
}
