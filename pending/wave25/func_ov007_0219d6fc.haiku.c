#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_0219b8ac(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c2fb0;

void func_ov007_0219d6fc(uint8_t *self)
{
    void *node;
    uint32_t *p;

    p = *(uint32_t **)(self + 0x88);
    *p = 3;
    node = func_0205681c(0x88);
    if (node) {
        node = func_ov007_0219b8ac(node, *(void **)(self + 0x8c), self + 0xd4);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x80) = data_ov007_021c2fb0;
}
