#include "ffc/types.h"

typedef void (*vfn_t)(void *, uint32_t, uint32_t);

void func_ov008_0219b374(uint8_t *p)
{
    if (*(uint8_t *)(p + 0x110) == 0) {
        void *obj = *(void **)(p + 0xc4);
        void *o2 = *(void **)((uint8_t *)obj + 0x98);
        vfn_t f = *(vfn_t *)(*(uint8_t **)o2 + 0x38);
        f(o2, 1, 0);
    } else {
        void *obj = *(void **)(p + 0xc4);
        void *o2 = *(void **)((uint8_t *)obj + 0x98);
        vfn_t f = *(vfn_t *)(*(uint8_t **)o2 + 0x38);
        f(o2, 4, 0);
    }
}
