#include "ffc/types.h"

extern void func_0209cfc8(void *p, uint32_t a, uint32_t b);
extern void func_02056858(uint32_t x);

void func_0209d06c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c) {
    if (p == 0) {
        return;
    }
    if (c != 0) {
        func_0209cfc8(p, *(uint32_t *)(p - 4), a);
    }
    func_02056858((uint32_t)(p - b));
}
