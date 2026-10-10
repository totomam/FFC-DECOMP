#include "ffc/types.h"

extern int func_0202b2dc(void *p);

void func_ov009_021a0354(uint8_t *p) {
    if (func_0202b2dc(*(void **)(p + 0x88))) {
        uint8_t *q = *(uint8_t **)(p + 0x88);
        q[0x41] = 0;
    }
}
