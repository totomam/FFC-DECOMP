#include "ffc/types.h"

extern uint32_t func_020363bc(const void *object);

uint32_t func_ov007_021aee3c(const void *object)
{
    uint8_t *p = (uint8_t *)func_020363bc(object);
    uint32_t r = 3;
    uint32_t a = *(uint32_t *)(p + 0xa4);
    uint8_t *q;
    if (a == 0) {
        q = 0;
    } else {
        q = p + a;
    }
    if (q != 0) {
        r = 0;
    } else {
        a = *(uint32_t *)(p + 0xa8);
        if (a == 0) {
            q = 0;
        } else {
            q = p + a;
        }
        if (q != 0) {
            r = 1;
        }
    }
    return r;
}
