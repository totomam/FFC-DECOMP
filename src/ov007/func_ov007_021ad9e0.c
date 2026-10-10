#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021ad5e8(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c53e4;

void func_ov007_021ad9e0(uint8_t *self)
{
    void *node;

    *(uint32_t *)(self + 0x88) = 0;
    node = func_0205681c(0xd8);
    if (node != 0) {
        node = func_ov007_021ad5e8(node, self + 0x88);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x80) = data_ov007_021c53e4;
}
