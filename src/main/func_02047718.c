#include "ffc/types.h"

typedef struct {
    uint8_t a;
    uint8_t p0[3];
    uint8_t b;
    uint8_t p1[3];
    uint8_t c;
} Arg5;

extern void func_02056c9c(void *self, uint32_t x);
extern uint32_t data_020af8f4;

uint8_t *func_02047718(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3, Arg5 s)
{
    func_02056c9c(self, 0);
    *(uint32_t *)self = (uint32_t)&data_020af8f4;
    *(uint32_t *)(self + 0x80) = a1;
    *(uint32_t *)(self + 0x84) = a2;
    *(uint32_t *)(self + 0x88) = a3;
    *(uint32_t *)(self + 0x8c) = 0;
    *(uint8_t *)(self + 0x90) = s.b;
    *(uint8_t *)(self + 0x91) = s.c;
    *(uint8_t *)(self + 0x92) = s.a;
    if (*(uint8_t *)(self + 0x91)) {
        *(uint32_t *)(self + 0x8c) = 2;
    }
    return self;
}
