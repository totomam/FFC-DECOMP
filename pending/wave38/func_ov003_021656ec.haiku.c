#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t arg);
extern void *data_ov003_0217b16c;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint16_t e;
    uint32_t f;
    uint8_t g;
} func_ov003_021656ec_arg_t;

void *func_ov003_021656ec(void *self, uint32_t p1, uint16_t p2, uint16_t p3, func_ov003_021656ec_arg_t s)
{
    func_02056c9c(self, 0);
    *(void **)self = &data_ov003_0217b16c;
    *(uint32_t *)((char *)self + 0x80) = p1;
    *(uint8_t *)((char *)self + 0x84) = s.g;
    *(uint16_t *)((char *)self + 0x86) = p2;
    *(uint16_t *)((char *)self + 0x88) = p3;
    *(uint16_t *)((char *)self + 0x8a) = s.e;
    *(uint32_t *)((char *)self + 0x8c) = s.f;
    *(uint32_t *)((char *)self + 0x90) = s.a;
    *(uint32_t *)((char *)self + 0x94) = s.b;
    *(uint32_t *)((char *)self + 0x98) = s.c;
    *(uint32_t *)((char *)self + 0x9c) = s.d;
    return self;
}
