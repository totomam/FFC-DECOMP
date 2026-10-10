#include "ffc/types.h"

extern int func_02066194(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

int func_020665c4(void *p, uint32_t x, uint32_t y) {
    return func_02066194(p, *(uint32_t *)((uint8_t *)p + 0x2c), 0, *(uint32_t *)((uint8_t *)p + 0x34), x, y);
}
