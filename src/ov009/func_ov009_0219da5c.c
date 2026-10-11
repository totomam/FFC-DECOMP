#include "ffc/types.h"

void func_ov009_0219da5c(uint8_t *p, uint8_t v) {
    uint8_t *a = *(uint8_t **)(p + 0x88);
    if (a != 0) {
        *(a + 0x41) = v;
    }
    uint8_t *b = *(uint8_t **)(p + 0x90);
    if (b != 0) {
        *(b + 0x41) = v;
    }
    p[0x17a] = v;
}
