#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021af150(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c42d0[2];

void func_ov007_021a5854(uint8_t *p)
{
    void *node = func_0205681c(0x15c);
    if (node != 0) {
        node = func_ov007_021af150(node, p + 0xc8);
    }
    func_02056bc0(p + 0x14, node);
    {
        uint32_t a = data_ov007_021c42d0[0];
        uint32_t b = data_ov007_021c42d0[1];
        *(uint32_t *)(p + 0xb8) = a;
        *(uint32_t *)(p + 0xbc) = b;
    }
}
