#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t v);
extern uint8_t *data_0213df18;
extern uint8_t data_ov007_021c71b4[];

typedef struct {
    uint32_t a, b, c, d;
} Blk;

uint8_t *func_ov007_021b90f8(uint8_t *self, uint32_t x, Blk blk, uint32_t y)
{
    func_02056c9c(self, *(uint32_t *)(data_0213df18 + 0x24));
    *(void **)self = data_ov007_021c71b4;
    *(uint32_t *)(self + 0x80) = x;
    *(Blk *)(self + 0x84) = blk;
    *(uint32_t *)(self + 0x94) = y;
    return self;
}
