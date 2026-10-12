#include "ffc/types.h"

extern uint32_t *func_02052430(uint32_t *a, uint32_t b, uint32_t c, uint32_t *d);
extern int32_t func_02052850(uint32_t b, uint32_t c);

void func_020523e8(uint32_t **out, uint32_t *a, uint32_t b)
{
    uint32_t *r7;
    int32_t r4;

    r7 = func_02052430(a, b, a[1], &a[1]);
    r4 = 1;
    if (r7 != a + 1) {
        r4 = func_02052850(b, (uint32_t)r7 + 0xc) < 0;
    }
    if (r4 != 0) {
        *out = a + 1;
    } else {
        *out = r7;
    }
}
