#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov011_021c6600(void *p, int flag, void *arg);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov011_021cbde4[2];

void func_ov011_021c9edc(uint8_t *self)
{
    void *node = func_0205681c(0x90);
    if (node != 0) {
        node = func_ov011_021c6600(node, 1, self + 0x94);
    }
    func_02056bc0(self + 0x14, node);
    {
        uint32_t *src = data_ov011_021cbde4;
        uint32_t a = src[0];
        uint32_t b = src[1];
        *(uint32_t *)(self + 0x80) = a;
        *(uint32_t *)(self + 0x84) = b;
    }
}
