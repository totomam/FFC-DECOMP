#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218b3d8(void *p);
extern void func_02056bc0(void *object, void *node);
extern Pair data_020b01a4;

void func_0204a568(void *param) {
    uint8_t *self = (uint8_t *)param;
    void *node = func_0205681c(0x738);
    if (node) {
        node = func_ov001_0218b3d8(node);
    }
    func_02056bc0(self + 0x14, node);
    Pair src = data_020b01a4;
    *(Pair *)(self + 0x80) = src;
}
