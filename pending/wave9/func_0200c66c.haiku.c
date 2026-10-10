#include "ffc/types.h"

extern void func_02068580(uint32_t a, uint32_t b);

void func_0200c66c(uint8_t *p, volatile uint32_t v, ...) {
    *(uint32_t *)(p + 0xd0) = v;
    func_02068580(*(uint32_t *)(p + 0x94), v);
}
