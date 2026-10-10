#include "ffc/types.h"

void func_ov003_021770d4(uint8_t *p) {
    uint8_t *q = *(uint8_t **)(p + 0x80);
    uint32_t *r = *(uint32_t **)(q + 0x214);
    *r = 0;
}
