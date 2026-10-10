#include "ffc/types.h"

extern void *func_020235fc(void *p);

uint32_t func_0202490c(uint8_t *self)
{
    uint32_t ret = (uint32_t)-1;
    void *obj = *(void **)(self + 0xe8);
    if (*(uint32_t *)((uint8_t *)obj + 0xc) != 0) {
        void *r = func_020235fc(obj);
        ret = *(uint32_t *)r;
    }
    return ret;
}
