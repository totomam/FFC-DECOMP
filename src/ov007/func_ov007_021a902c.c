#include "ffc/types.h"

extern void func_020694ac(void *p, uint32_t a, uint32_t b);
extern uint8_t data_ov007_021c48d8[];

void *func_ov007_021a902c(void *self, uint32_t val) {
    func_020694ac(self, 0, 0);
    *(uint8_t **)self = data_ov007_021c48d8;
    *(uint32_t *)((uint8_t *)self + 0xd0) = val;
    *(uint8_t *)((uint8_t *)self + 0xd4) = 1;
    return self;
}
