#include "ffc/types.h"

extern void *func_ov001_0217f324(void *a, void *b);
extern int func_ov001_0217f2c4(void *p, uint32_t c);

int func_ov001_0217f014(void *a, void *b, uint32_t c) {
    uint32_t *p = (uint32_t *)func_ov001_0217f324(a, b);
    if (p == 0) {
        return 0;
    }
    p[2] = 0;
    return func_ov001_0217f2c4(p, c);
}
