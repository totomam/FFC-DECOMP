#include "ffc/types.h"

extern int32_t func_ov006_021b3c00(void *a);
extern void func_ov006_021b3dc8(void *a, int32_t b, int32_t *c, int32_t *d);
extern void func_ov006_021b3c04(void *a, int32_t b, int32_t c, int32_t d);

void func_ov006_021b1714(void *p, int32_t lim) {
    int32_t x;
    int32_t y;
    int32_t n;
    int32_t i;
    int32_t flag;

    n = func_ov006_021b3c00(p);
    for (i = 0; i < n; i++) {
        func_ov006_021b3dc8(p, i, &x, &y);
        if (y >= lim && y < 0xc0) {
            flag = 0;
        } else {
            flag = 0x200;
        }
        func_ov006_021b3c04(p, i, flag, 0);
    }
}
