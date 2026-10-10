#include "ffc/types.h"

extern void func_0206c1e8(uint8_t *p, int32_t flag);

uint8_t *func_0206c1c8(uint8_t *p, int32_t flag)
{
    *p = 0;
    if (flag) {
        func_0206c1e8(p, flag);
    }
    return p;
}
