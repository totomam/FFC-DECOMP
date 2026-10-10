#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov012_021d12f8(void *p) {
    uint8_t *q = *(uint8_t **)((uint8_t *)p + 0xa8);
    if (!q[0x354]) {
        func_02021338(0xb9);
        return;
    }
    q[0x354] = 0;
}
