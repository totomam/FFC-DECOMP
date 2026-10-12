#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a73d4(void *obj, uint32_t *field);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c45d4[];

void func_ov007_021a771c(uint8_t *self)
{
    uint32_t s;
    uint32_t val;
    void *node;
    uint32_t a, b;

    *(uint32_t *)(self + 0x84) = 1;
    s = **(uint32_t **)(self + 0x80);
    switch (s) {
    case 0:
        val = 0;
        break;
    case 1:
        val = 1;
        break;
    case 2:
        val = 2;
        break;
    default:
        goto skip;
    }
    *(uint32_t *)(self + 0x84) = val;
skip:
    node = func_0205681c(0xd0);
    if (node != 0) {
        node = func_ov007_021a73d4(node, (uint32_t *)(self + 0x84));
    }
    func_02056bc0(self + 0x14, node);
    a = data_ov007_021c45d4[0];
    b = data_ov007_021c45d4[1];
    *(uint32_t *)(self + 0x88) = a;
    *(uint32_t *)(self + 0x8c) = b;
}
