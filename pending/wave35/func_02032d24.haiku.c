#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_02056c9c(void *self, int x);
extern void func_02032dd0(void *self, Pair s, void *p, uint32_t d, uint32_t e);
extern uint32_t data_020ae0b0[];

void *func_02032d24(void *self, Pair s, uint32_t *p, uint32_t d, uint32_t e)
{
    uint32_t i;
    uint32_t f;
    func_02056c9c(self, 0);
    *(uint32_t **)self = data_020ae0b0;
    for (i = 0; i < 3; i++) {
        ((uint32_t *)((uint8_t *)self + 0x90))[i] = i;
    }
    f = (*p << 31) >> 31;
    func_02032dd0(self, s, (f == 0) ? (void *)((uint8_t *)p + 1) : (void *)p[2], d, e);
    return self;
}
