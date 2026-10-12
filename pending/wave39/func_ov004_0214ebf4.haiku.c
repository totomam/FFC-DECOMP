#include "ffc/types.h"

typedef struct {
    uint32_t w;
    uint8_t f;
} S;

extern int32_t func_ov004_0214f740(void *a, int32_t c);
extern void func_ov004_0214ecac(void *a, int32_t c, int32_t *x, S *s);
extern int32_t func_01fff08c(int32_t b, int32_t x, uint32_t w);

int32_t func_ov004_0214ebf4(void *a, int32_t b, int32_t c, int32_t d, S s)
{
    int32_t x;

    if (b == 0) {
        return 0;
    }
    if (func_ov004_0214f740(a, c) == 0) {
        x = d;
    } else {
        x = (*(int32_t *)((uint8_t *)a + 0xfc) - 1) - d;
    }
    d = x;
    if (s.f == 0) {
        func_ov004_0214ecac(a, c, &d, &s);
    }
    return func_01fff08c(b, d, s.w);
}
