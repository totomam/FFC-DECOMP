#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint8_t c;
} S;

typedef struct {
    uint32_t a;
    uint32_t b;
} P;

extern void func_02056c9c(void *p, uint32_t x);
extern void func_020095b8(void *p, uint32_t x);
extern uint32_t data_ov002_021d58f8[];
extern P data_ov002_021d5988;
extern uint32_t data_ov002_021d7954[];

void *func_ov002_021b1fb0(uint32_t *self, uint32_t p1, uint32_t p2, uint32_t p3, S s)
{
    uint8_t *base = (uint8_t *)self;
    func_02056c9c(self, 0);
    self[0] = (uint32_t)data_ov002_021d58f8;
    *(uint32_t *)(base + 0x88) = p1;
    func_020095b8(base + 0x8c, p2);
    *(uint32_t *)(base + 0x98) = s.a;
    *(uint32_t *)(base + 0x9c) = s.b;
    *(uint32_t *)(base + 0xa4) = p3;
    *(uint8_t *)(base + 0xa8) = s.c;
    *(P *)(base + 0x80) = data_ov002_021d5988;
    data_ov002_021d7954[0]++;
    return self;
}
