#include "ffc/types.h"

extern int32_t func_0207f4bc(void *a, int32_t b, int32_t c, uint32_t d);

void func_0207f70c(void *a0, uint8_t *p, int32_t a2, uint32_t a3, uint32_t *out) {
    uint8_t *q = p + 0x30;
    *(uint32_t *)(p + 0x30) = a3;
    *(uint16_t *)(q + 8) = 0;
    *(uint16_t *)(q + 10) = 0;
    *(uint32_t *)(q + 4) = *out;
    if (func_0207f4bc(p, 5, 1, a3) == 0) {
        *out = *(uint32_t *)(q + 4);
    }
}
