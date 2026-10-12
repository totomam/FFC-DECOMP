#include "ffc/types.h"

extern int32_t func_02093528(int32_t a, uint32_t b, void (*c)(void), int32_t *d, int32_t *e, int32_t *f, int32_t *g);
extern void func_0209270c(void);
extern uint32_t data_02144c00;

int32_t func_02093748(int32_t a, int32_t *out, int32_t p2) {
    int32_t loc[5];
    int32_t r;

    loc[0] = a;
    loc[1] = 0;
    r = func_02093528(p2, 0x7fffffff, func_0209270c, &loc[0], &loc[4], &loc[3], &loc[2]);
    if (out != 0) {
        *out = a + loc[4];
    }
    if (loc[2] != 0) {
        data_02144c00 = 0x22;
        return ~loc[1];
    }
    if (loc[3] != 0) {
        return -r;
    }
    return r;
}
