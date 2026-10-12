#include "ffc/types.h"

extern void func_02084e04(void *dst, void *src, int32_t n);

typedef struct {
    int32_t pad[4];
    int32_t p;
    int32_t a;
    int32_t q;
    int32_t b;
} S;

int32_t func_ov000_0214e32c(uint8_t *buf, int32_t n, S *s)
{
    int32_t x = s->a;
    int32_t y = s->b;

    if (x > n) {
        x = n;
        y = 0;
    } else {
        int32_t r = n - x;
        if (y > r) {
            y = r;
        }
    }

    if (x > 0) {
        func_02084e04((void *)s->p, buf, x);
        s->p += x;
        s->a -= x;
    }

    if (y > 0) {
        func_02084e04((void *)s->q, buf + x, y);
        s->q += y;
        s->b -= y;
    }

    return x + y;
}
