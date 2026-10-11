#include "ffc/types.h"

extern uint8_t *func_02024f2c(void *a, void *b, uint32_t c, void *d);

void func_02024f00(uint8_t **out, uint8_t *p, uint8_t *key) {
    uint8_t *r;
    r = func_02024f2c(p, key, *(uint32_t *)(p + 4), p + 4);
    if (r == p + 4 || *key < r[0xc]) {
        *out = p + 4;
        return;
    }
    *out = r;
}
