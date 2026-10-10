#include "ffc/types.h"

void func_ov007_021a0424(uint8_t *p) {
    int32_t *v = (int32_t *)(p + 0x170);
    if (*v != 0) {
        *v = *v - 1;
    }
}
