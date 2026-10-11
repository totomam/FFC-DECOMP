#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov007_021b7d54(void *obj, void *slot);
extern void *func_ov001_0218dde0(void *self, int flag);
extern void func_02056bc0(void *object, void *node);
typedef struct { uint32_t a; uint32_t b; } Pair;
extern Pair data_ov007_021c712c;

void func_ov007_021b8390(uint8_t *self)
{
    void *node;

    *(void **)(self + 0xb8) = 0;
    node = func_0205681c(0xe0);
    if (node != 0) {
        node = func_ov007_021b7d54(node, self + 0xb8);
    }
    func_02056bc0(func_ov001_0218dde0(self, 1), node);
    *(Pair *)(self + 0xb0) = data_ov007_021c712c;
}
