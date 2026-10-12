#include "ffc/types.h"

extern int32_t func_02093528(int32_t b, uint32_t c, void (*d)(void), void *e, int32_t *f, int32_t *g, int32_t *h);
extern void func_0209270c(void);
extern uint32_t data_02144c00;

int32_t func_02093748(int32_t a, int32_t *out, int32_t p2) {
    int32_t w, y, x;
    struct { int32_t a; int32_t z; } s;
    int32_t r;

    s.a = a;
    s.z = 0;
    r = func_02093528(p2, 0x7fffffff, func_0209270c, &s, &w, &y, &x);
    if (out != 0) {
        *out = a + w;
    }
    if (x != 0) {
        data_02144c00 = 0x22;
        return ~s.z;
    }
    if (y != 0) {
        return -r;
    }
    return r;
}
