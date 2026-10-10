#include "ffc/types.h"

void func_ov004_0214fd10(uint8_t *p, int32_t i) {
    uint8_t *b = *(uint8_t **)(p + 0x10C);
    *(uint8_t *)(b + i * 0x38 + 0x35) = 1;
}
