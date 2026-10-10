#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a41a4(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c43a8;

void func_ov007_021a66f0(uint8_t *self) {
    void *node = func_0205681c(0x10c);
    if (node) {
        node = func_ov007_021a41a4(node, *(void **)(self + 0x88), self + 0x98);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x80) = data_ov007_021c43a8;
}
