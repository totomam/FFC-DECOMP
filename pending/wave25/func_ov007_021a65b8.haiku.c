#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021a35c8(void *p, void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c4370;

void func_ov007_021a65b8(uint8_t *self)
{
    void *node = func_0205681c(0x134);
    if (node != (void *)0) {
        node = func_ov007_021a35c8(node, *(void **)(self + 0x88), self + 0x94, self + 0x9c);
    }
    func_02056bc0(self + 0x14, node);
    *(Pair *)(self + 0x80) = data_ov007_021c4370;
}
