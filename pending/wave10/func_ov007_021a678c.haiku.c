#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a76b4(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c43c0;

void func_ov007_021a678c(uint8_t *self)
{
    void *node;

    *(uint32_t *)(self + 0xa4) = 1;
    node = func_0205681c(0x90);
    if (node != 0) {
        node = func_ov007_021a76b4(node, self + 0xa4);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x80) = data_ov007_021c43c0;
}
