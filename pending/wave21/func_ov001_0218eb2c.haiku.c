#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218e840(void *a, void *b);
extern void func_02056bc0(void *object, void *node);

void func_ov001_0218eb2c(void *p) {
    uint8_t *base = (uint8_t *)p;
    void *node = func_0205681c(0x8c);
    if (node != 0) {
        node = func_ov001_0218e840(node, *(void **)(base + 0x80));
    }
    func_02056bc0(base + 0x14, node);
}
