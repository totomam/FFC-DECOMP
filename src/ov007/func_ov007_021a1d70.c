#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a6038(void *a, void *b, uint8_t c);
extern void func_02056bc0(void *object, void *node);
extern uint32_t data_ov007_021c3bac[];

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov007_021a1d70(void *self)
{
    uint8_t *p = (uint8_t *)self;
    void *node = func_0205681c(0xb4);
    if (node != 0) {
        node = func_ov007_021a6038(node, p + 0x90, *(uint8_t *)(p + 0x98));
    }
    func_02056bc0(p + 0x14, node);
    *(Pair *)(p + 0x80) = *(Pair *)data_ov007_021c3bac;
}
