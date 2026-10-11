#include "ffc/types.h"

extern void func_02042b18(uint32_t a, uint32_t b);
extern uint32_t data_020afb30[2];

void func_02044ad0(uint8_t *p) {
    uint32_t *d;
    uint32_t x;
    uint32_t y;
    func_02042b18(*(uint32_t *)(p + 0x88), 0);
    *(uint32_t *)(p + 0x8c) = 0;
    d = data_020afb30;
    x = d[0];
    y = d[1];
    *(uint32_t *)(p + 0x80) = x;
    *(uint32_t *)(p + 0x84) = y;
}
