#include "ffc/types.h"

void func_0201fd20(uint8_t *a, uint32_t *b) {
    uint32_t *d = *(uint32_t **)(a + 0x1cc);
    d[0] = b[0];
    d[1] = b[1];
    d[2] = b[2];
    d[3] = b[3];
}
