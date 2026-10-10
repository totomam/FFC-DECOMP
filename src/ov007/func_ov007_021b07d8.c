#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b3370(void *a, void *b, void *c);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c5b68;

void func_ov007_021b07d8(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *node = func_0205681c(0x30c);
    if (node != 0) {
        node = func_ov007_021b3370(node, self, s + 0xc4);
    }
    func_02056bc0(s + 0x14, node);
    *(Pair *)(s + 0xb0) = data_ov007_021c5b68;
}
