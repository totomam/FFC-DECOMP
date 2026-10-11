#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint16_t b;
} S8;

extern void func_02056c9c(void *p, uint32_t x);
extern uint8_t data_ov003_0217b19c[];

void *func_ov003_0216540c(void *self, uint32_t p1, uint32_t p2, uint32_t p3, S8 s, uint32_t p6)
{
    uint8_t *obj = (uint8_t *)self;
    func_02056c9c(self, 0);
    *(void **)obj = data_ov003_0217b19c;
    *(uint32_t *)(obj + 0x80) = p1;
    *(uint16_t *)(obj + 0x84) = s.b;
    *(uint32_t *)(obj + 0x88) = p2;
    *(uint32_t *)(obj + 0x8c) = p3;
    *(uint32_t *)(obj + 0x90) = s.a;
    *(uint32_t *)(obj + 0x94) = p6;
    return self;
}
