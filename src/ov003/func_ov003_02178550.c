#include "ffc/types.h"

void func_ov003_02178550(void *a, uint32_t b) {
    uint32_t *p = *(uint32_t **)((uint8_t *)a + 0x20);
    p[4] = (p[4] & ~3u) | (b & 3u);
}
