#include "ffc/types.h"

typedef struct {
    uint32_t x;
    uint32_t y;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b1158(void *p, uint32_t a, uint32_t b, void *c, uint32_t d, uint32_t e);
extern void *func_ov001_0218dde0(void *obj, uint32_t flag);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c5fdc;
extern void *data_020b8e44;

void func_ov007_021b220c(uint8_t *obj)
{
    void *node;
    void *tmp;
    Pair pr;

    node = func_0205681c(0xb4);
    if (node != 0) {
        node = func_ov007_021b1158(node,
                                   *(uint32_t *)data_020b8e44,
                                   *(uint32_t *)(obj + 0xb8),
                                   obj + 0xd4,
                                   *(uint32_t *)(obj + 0xc8),
                                   0);
    }
    tmp = func_ov001_0218dde0(obj, 0);
    func_02056bc0(tmp, node);
    pr = data_ov007_021c5fdc;
    *(Pair *)(obj + 0xb0) = pr;
}
