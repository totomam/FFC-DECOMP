#include "ffc/types.h"

typedef void (*VFn)(void *);

void func_ov005_02195d40(void *p) {
    uint8_t *a = (uint8_t *)p;
    void *o;
    switch (a[0x3c]) {
    case 1:
        o = *(void **)(a + 0x24);
        break;
    case 2:
        if (*(uint32_t *)(a + 0x44) == 2) {
            goto end;
        }
        o = *(void **)(a + 0x28);
        break;
    default:
        goto end;
    }
    ((VFn)((void **)*(void **)o)[10])(o);
end:
    a[0x3d] = 0;
    *(uint32_t *)(a + 0x40) = 0;
}
