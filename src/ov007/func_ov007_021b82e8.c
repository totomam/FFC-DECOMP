#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b7248(void *obj, void *node);
extern void *func_ov001_0218dde0(void *self, uint32_t flag);
extern void func_02056bc0(void *object, void *node);
extern Pair data_ov007_021c7114;

void func_ov007_021b82e8(uint8_t *self)
{
    void *node;
    void *obj;

    node = func_0205681c(0xd0);
    if (node != 0) {
        node = func_ov007_021b7248(node, self + 0xb8);
    }
    obj = func_ov001_0218dde0(self, 1);
    func_02056bc0(obj, node);
    *(Pair *)(self + 0xb0) = data_ov007_021c7114;
}
