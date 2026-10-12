#include "ffc/types.h"

extern int32_t func_0204b780(void *obj, int32_t v);
extern int32_t func_0204aba4(void *ctx, void *p, int32_t a, int32_t b, int32_t c, int32_t d);

int32_t func_0204b7ac(void *ctx, uint8_t *p, int32_t a, int32_t b, int32_t c, int32_t d)
{
    uint8_t *obj = *(uint8_t **)(p + 0x2c);
    int32_t lim;
    int32_t n;

    if (func_0204b780(obj, b) != 0) {
        return -1003;
    }
    lim = *(int32_t *)(obj + 0x1c) - b;
    n = lim;
    if (c <= lim) {
        n = c;
    }
    return func_0204aba4(ctx, p, a, *(int32_t *)(obj + 0x28) + b, n, d);
}
