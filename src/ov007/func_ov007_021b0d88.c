#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_ov001_0218e968(void *p);
extern void func_02056bc0(void *object, void *node);

void func_ov007_021b0d88(uint8_t *p) {
    void *n = func_0205681c(0xbc);
    if (n != 0) {
        n = func_ov001_0218e968(n);
    }
    *(void **)(p + 0x84) = n;
    func_02056bc0(p + 0x14, n);
}
