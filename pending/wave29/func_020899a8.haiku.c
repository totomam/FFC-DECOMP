#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} Time3;

extern int64_t func_0209a76c(int32_t n, int32_t d);

void func_020899a8(Time3 *p, int32_t v)
{
    int64_t d;
    if (v < 0) {
        v = 0;
    }
    if (v > 0x1517f) {
        v = 0x1517f;
    }
    d = func_0209a76c(v, 60);
    p->c = (int32_t)(d >> 32);
    d = func_0209a76c(v, 60);
    v = (int32_t)d;
    d = func_0209a76c(v, 60);
    p->b = (int32_t)(d >> 32);
    d = func_0209a76c(v, 60);
    p->a = (int32_t)d;
}
