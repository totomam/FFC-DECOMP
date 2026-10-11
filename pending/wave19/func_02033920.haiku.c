#include "ffc/types.h"

typedef void (*fn_t)(void *, int, int);

void func_02033920(uint8_t *p) {
    int m;
    if (p[0x98]) {
        m = 3;
    } else {
        m = 6;
    }
    {
        void *obj = *(void **)(p + 0x94);
        fn_t f = ((fn_t *)(*(void **)obj))[14];
        f(obj, m, 1);
    }
}
