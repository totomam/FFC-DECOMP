#include "ffc/types.h"

extern void func_02056c9c(void *p, uint32_t x);
extern int data_ov003_0217ad04;

typedef struct {
    uint8_t x;
    uint8_t pad[3];
    uint8_t y;
} S5;

void *func_ov003_021680b0(void *self, uint32_t a, uint32_t b, uint32_t c, S5 s)
{
    uint8_t *p = (uint8_t *)self;
    func_02056c9c(self, 0);
    *(int **)p = &data_ov003_0217ad04;
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
    *(uint32_t *)(p + 0x88) = c;
    *(uint8_t *)(p + 0x8c) = s.x;
    *(uint8_t *)(p + 0x8d) = s.y;
    *(uint32_t *)(p + 0x90) = 0;
    return self;
}
