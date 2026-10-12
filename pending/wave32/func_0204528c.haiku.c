#include "ffc/types.h"

extern void func_020375bc(uint32_t arg);
extern void func_0201e92c(uint32_t a, int32_t b, void *c);
extern void func_02056bf4(void *dst, uint32_t val);
extern uint32_t data_020b93b8;
extern uint32_t data_020afbb8[2];

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

void func_0204528c(uint8_t *self)
{
    int32_t v;
    uint32_t r4;
    uint8_t *r6;
    Pair p;

    func_020375bc(0);
    v = *(int32_t *)(self + 0x1EC);
    if (v >= 0) {
        func_0201e92c(data_020b93b8, v, self + 0x1D4);
    }
    r4 = *(uint32_t *)(self + 0x94);
    r6 = self + 0x48;
    func_02056bf4(r6, *(uint32_t *)(self + 0x90));
    func_02056bf4(r6, r4);
    p = *(Pair *)data_020afbb8;
    *(Pair *)(self + 0x80) = p;
}
