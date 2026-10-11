#include "ffc/types.h"

extern void func_ov003_0215553c(void *a, void *b, int c);

void func_ov003_0215b4f4(uint8_t *self) {
    void *r1;
    void *r2 = *(void **)(self + 0x114);
    if (r2 != 0) {
        r1 = *(void **)((uint8_t *)r2 + 0x34);
    } else {
        r1 = *(void **)(self + 0x110);
        if (r1 == 0) {
            return;
        }
        r1 = *(void **)((uint8_t *)r1 + 0x34);
    }
    void *r0 = *(void **)(self + 0x364);
    if (r0 != 0) {
        func_ov003_0215553c(r0, r1, 1);
    }
}
