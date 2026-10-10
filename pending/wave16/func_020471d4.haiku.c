#include "ffc/types.h"

extern void func_02046d20(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint8_t data_020afaa4[];

void *func_020471d4(void *self, uint32_t a, uint32_t v) {
    func_02046d20(self, a, 2, 1, 0);
    *(uint8_t **)self = data_020afaa4;
    *(uint32_t *)((uint8_t *)self + 0x98) = v;
    return self;
}
