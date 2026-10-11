#include "ffc/types.h"

extern void func_ov002_021c95bc(void *p, uint32_t b, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t n);
extern void func_02056bc0(void *object, void *node);
extern uint8_t data_ov002_021d4850[];
extern uint8_t data_ov002_021d4868[];
extern uint8_t data_ov002_021d483c[];

void *func_ov002_02196b0c(void *a, uint32_t b, uint32_t c) {
    uint8_t *obj = (uint8_t *)a;
    uint32_t *node;
    uint32_t zero = 0;

    func_ov002_021c95bc(a, b, c, 0);
    *(uint32_t *)obj = (uint32_t)data_ov002_021d4850;
    *(uint32_t *)(obj + 0x80) = (uint32_t)data_ov002_021d4868;
    obj[0x118] = (uint8_t)zero;
    node = (uint32_t *)func_0205681c(0x20);
    if (node != 0) {
        node[3] &= ~0xffu;
        node[0] = (uint32_t)data_ov002_021d483c;
        node[5] = zero;
        ((uint8_t *)node)[0x18] = (uint8_t)zero;
        node[7] = zero;
    }
    *(uint32_t **)(obj + 0x10c) = node;
    func_02056bc0(obj + 0x48, node);
    return a;
}
