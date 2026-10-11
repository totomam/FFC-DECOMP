#include "ffc/types.h"

extern uint32_t *func_ov000_02164418(void *a);
extern int32_t func_ov000_0216443c(void *a);

int func_ov000_02164000(void *a, uint32_t b, uint32_t c)
{
    uint32_t *p = func_ov000_02164418(a);
    if (func_ov000_0216443c(a) == 2) {
        return 0;
    }
    p[1] = b;
    p[2] = c;
    *((uint8_t *)p + 0x1d) = 1;
    p[4] = 0;
    p[6] = 0;
    return 1;
}
