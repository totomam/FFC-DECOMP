#include "ffc/types.h"

extern void func_0209cfc8(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056858(uint32_t x);

void func_0209d06c(uint32_t a, uint32_t b, uint32_t c, uint32_t d) {
    if (a != 0) {
        if (d != 0) {
            func_0209cfc8(a, *(uint32_t *)(a - 4), b, d);
        }
        func_02056858(a - c);
    }
}
