#include "ffc/types.h"

typedef struct {
    uint16_t a;
    uint16_t b;
    uint16_t c;
    uint16_t d;
} S;

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217a89c[];

void *func_ov003_021645dc(uint8_t *self, uint32_t a, uint16_t b, uint16_t c, S s, uint32_t x, uint32_t y, uint32_t z)
{
    func_02056c9c(self, 0);
    *(void **)self = data_ov003_0217a89c;
    *(uint32_t *)(self + 0x80) = a;
    *(uint16_t *)(self + 0x84) = b;
    *(uint16_t *)(self + 0x86) = c;
    *(uint16_t *)(self + 0x88) = s.a;
    *(uint16_t *)(self + 0x8a) = s.c;
    *(uint32_t *)(self + 0x8c) = x;
    *(uint32_t *)(self + 0x90) = y;
    *(uint32_t *)(self + 0x94) = z;
    return self;
}
