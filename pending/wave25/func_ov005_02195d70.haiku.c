#include "ffc/types.h"

void func_ov005_02195d70(void *p) {
    uint8_t *b = (uint8_t *)p;
    uint8_t s = b[0x3c];
    void *o;

    if (s == 1) {
        goto case1;
    }
    if (s == 2) {
        goto case2;
    }
    goto done;

case1:
    o = *(void **)(b + 0x24);
    goto call;

case2:
    if (*(uint32_t *)(b + 0x44) == 2) {
        goto done;
    }
    o = *(void **)(b + 0x28);

call:
    (*(void (**)(void *))(*(uint32_t *)o + 0x2c))(o);

done:
    b[0x3d] = 1;
    *(uint32_t *)(b + 0x40) = 0;
}
