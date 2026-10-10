#include "ffc/types.h"

typedef int (*fn_t)(void *, uint32_t);

int func_02072a24(void *p, uint8_t *s)
{
    fn_t f = *(fn_t *)(s + 0x90);
    if (f != 0) {
        return f(p, *(uint32_t *)(s + 0x94));
    }
    return 1;
}
