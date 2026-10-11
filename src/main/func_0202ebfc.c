#include "ffc/types.h"

extern int32_t func_0202eba4(void *p);

uint16_t func_0202ebfc(void *p)
{
    int32_t *q;
    if (func_0202eba4(p)) {
        return 2;
    }
    q = *(int32_t **)((uint8_t *)p + 0x90);
    if (q != 0) {
        return (uint16_t)(int8_t)q[3];
    }
    return 2;
}
