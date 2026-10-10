#include "ffc/types.h"

extern void func_0202b6b0(void *p, int32_t v);

void func_0202c8c8(int32_t *p) {
    int32_t b = p[6];
    int32_t a = p[5];
    if (a >= b) {
        func_0202b6b0(p, a - b);
    }
}
