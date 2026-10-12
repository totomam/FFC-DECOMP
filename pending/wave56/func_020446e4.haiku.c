#include "ffc/types.h"

extern void func_020375f4(uint32_t mask);
extern void *func_0205681c(uint32_t size);
extern void *func_ov004_02152d74(void *a, uint32_t b, void *c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h, uint32_t i, uint32_t j, uint32_t k, uint32_t l);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_020afb08[2];
typedef struct { uint32_t a; uint32_t b; } Pair;

void func_020446e4(void *self)
{
    uint8_t *s = (uint8_t *)self;
    uint32_t mode;
    void *node;

    func_020375f4(0x20);
    switch (*(uint32_t *)(s + 0x94)) {
    case 0:
        mode = 0;
        break;
    case 1:
        mode = 2;
        break;
    case 2:
        mode = 3;
        break;
    case 3:
        mode = 4;
        break;
    }

    node = func_0205681c(0x388);
    if (node != 0) {
        node = func_ov004_02152d74(node, *(uint32_t *)(s + 0x90), s + 0xa0,
                                   *(uint32_t *)(s + 0x9c), *(uint32_t *)(s + 0x98),
                                   mode, 0, 0, 0, 0, 0, 0);
    }

    if (mode == 4) {
        *(uint32_t *)((uint8_t *)node + 0x2a8) = *(uint32_t *)(s + 0x19c);
    }

    func_02056bc0(s + 0x14, node);
    {
        Pair pr = *(Pair *)data_020afb08;
        *(Pair *)(s + 0x80) = pr;
    }
}
