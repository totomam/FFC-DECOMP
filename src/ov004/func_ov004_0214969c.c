#include "ffc/types.h"

void func_ov004_0214969c(uint8_t *p, int32_t x) {
    int32_t v = *(int32_t *)(p + 0x8c) + x * 60;
    *(int32_t *)(p + 0x8c) = v;
    if (*(int32_t *)(p + 0x90) < v) {
        *(int32_t *)(p + 0x8c) = *(int32_t *)(p + 0x90);
    }
}
