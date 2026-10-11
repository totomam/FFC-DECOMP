#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern uint32_t func_ov007_021bd088(void *a, void *b, void *c, uint8_t *d, uint32_t e);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c69b4;

void func_ov007_021b55b4(void *p)
{
    uint8_t *base = (uint8_t *)p;
    void *node;
    Pair v;

    base[0x564] = 0;
    node = func_0205681c(0x1e0);
    if (node != 0) {
        node = (void *)func_ov007_021bd088(node, p, base + 0xc0, base + 0x564,
                                           *(uint32_t *)(base + 0xb8));
    }
    func_02056bc0(base + 0x14, node);
    v = data_ov007_021c69b4;
    *(Pair *)(base + 0xb0) = v;
}
