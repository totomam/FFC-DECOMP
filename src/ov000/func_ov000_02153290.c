#include "ffc/types.h"

extern int func_02084ca4(int8_t *p, int32_t *q, int n);

int func_ov000_02153290(int8_t *p, int32_t *q)
{
    int8_t c = p[0];
    int ok = 0;
    int32_t v;
    if (c < 0x30) {
        goto done;
    }
    if (c > 0x39) {
        goto done;
    }
    ok = 1;
done:
    v = c - 0x30;
    if (ok == 0) {
        v = 0xff;
    }
    q[1] = v;
    return func_02084ca4(p + 1, q + 3, 9);
}
