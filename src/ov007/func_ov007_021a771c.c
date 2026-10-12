#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a73d4(void *obj, uint32_t *field);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern uint32_t data_ov007_021c45d4[];

void func_ov007_021a771c(uint8_t *self)
{
    uint32_t s;
    uint32_t val;
    void *node;
    uint32_t a, b;

    *(uint32_t *)(self + 0x84) = 1;
    switch (**(uint32_t **)(self + 0x80)) {
    case 0: *(uint32_t *)(self + 0x84) = 0; break;
    case 1: *(uint32_t *)(self + 0x84) = 1; break;
    case 2: *(uint32_t *)(self + 0x84) = 2; break;
    }
    node = func_0205681c(0xd0);
    if (node != 0) {
        node = func_ov007_021a73d4(node, (uint32_t *)(self + 0x84));
    }
    func_02056bc0(self + 0x14, node);
    {
        Pair p = *(Pair *)data_ov007_021c45d4;
        *(Pair *)(self + 0x88) = p;
    }
}
