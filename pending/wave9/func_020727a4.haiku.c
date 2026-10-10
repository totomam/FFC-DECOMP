#include "ffc/types.h"

typedef int (*fn_t)(void *, uint32_t);

int func_020727a4(void *p, uint8_t *s)
{
    fn_t f = *(fn_t *)(s + 0x8c);
    if (f != 0) {
        return f(p, *(uint32_t *)(s + 0x90));
    }
    return 1;
}
