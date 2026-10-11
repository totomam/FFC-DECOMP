#include "ffc/types.h"

extern uint64_t func_0209a76c(int32_t a, uint32_t b);

typedef uint32_t (*VFn)(void *);

uint32_t func_0202b2f0(uint8_t *p) {
    void *obj = *(void **)(p + 0x34);
    uint32_t v;
    int32_t a;
    uint64_t r;
    uint32_t ret;
    if (obj != 0) {
        v = ((VFn)(*(void ***)obj)[6])(obj);
        a = *(int32_t *)(p + 0x14) - *(int32_t *)(p + 0x18);
        r = func_0209a76c(a, v << 4);
        ret = 1;
        if ((uint32_t)(r >> 32) != 0) {
            ret = 0;
        }
        return ret;
    }
    return 0;
}
