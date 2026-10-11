#include "ffc/types.h"

extern uint32_t data_ov003_02179aa8[2];

void func_ov003_0214f3ac(uint8_t *p) {
    if (p[0xb5] != 0) {
        return;
    }
    int32_t n = *(int32_t *)(p + 0xb8) - 1;
    *(int32_t *)(p + 0xb8) = n;
    if (n != 0) {
        return;
    }
    p[0xb4] = 0;
    uint32_t a = data_ov003_02179aa8[0];
    uint32_t b = data_ov003_02179aa8[1];
    *(uint32_t *)(p + 0x80) = a;
    *(uint32_t *)(p + 0x84) = b;
}
