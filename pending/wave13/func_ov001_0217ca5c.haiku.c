#include "ffc/types.h"

typedef void (*fn_t)(uint32_t, uint32_t, uint32_t);

void func_ov001_0217ca5c(uint32_t a, uint32_t *b)
{
    fn_t f = (fn_t)b[1];
    f(b[0], a, b[2]);
}
