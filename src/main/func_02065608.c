#include "ffc/types.h"

int func_02065608(uint8_t *p) {
    void *obj = *(void **)(p + 0x14);
    int (*fn)(void *, uint32_t, uint32_t) = (int (*)(void *, uint32_t, uint32_t))((void **)*(void **)obj)[14];
    return fn(obj, *(uint32_t *)(p + 0x18), *(uint32_t *)(p + 0x1c));
}
