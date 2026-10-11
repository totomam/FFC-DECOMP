#include "ffc/types.h"

extern void func_02059be4(void *p);
extern uint32_t *func_0204f08c(uint32_t a, uint32_t b);

void func_02059df4(uint8_t *self) {
    uint32_t a, b, c, d;
    uint32_t *out;
    func_02059be4(self);
    a = *(uint32_t *)(self + 0x1c);
    b = *(uint32_t *)(self + 0x14);
    c = *(uint32_t *)(self + 0x18);
    d = *(uint32_t *)(self + 0x20);
    out = func_0204f08c(b, c);
    *out = (uint16_t)a | ((uint32_t)(uint16_t)d << 16);
}
