#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218e98c(void *p, uint8_t v);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b0fd8(uint8_t *p) {
    void *r = func_0205681c(0xbc);
    if (r != 0) {
        r = func_ov001_0218e98c(r, *(uint8_t *)(p + 0x8c));
    }
    *(void **)(p + 0x88) = r;
    func_02056bc0(p + 0x48, r);
}
