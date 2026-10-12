#include "ffc/types.h"

extern long long func_0209a76c(int32_t a, int32_t b);
#define Q(x) ((int32_t)(x))
#define R(x) ((int32_t)((x) >> 32))

typedef struct O { void **vt; } O;

void func_ov009_02199700(uint8_t *p, int32_t n)
{
    int32_t div;
    int32_t seen;
    int32_t i;
    volatile int32_t m = n;

    if (m >= 100000) m = 99999;
    if (m < 0) m = 0;

    div = 100000;
    seen = 0;
    for (i = 0; i < 5; i++) {
        O *o;
        div = Q(func_0209a76c(div, 10));
        if (seen != 0 || R(func_0209a76c(Q(func_0209a76c(m, div)), 10)) > 0) {
            int32_t d = R(func_0209a76c(Q(func_0209a76c(m, div)), 10));
            o = *(O **)(p + (i << 2) + 0x80);
            ((void (*)(O *, int32_t, int32_t))o->vt[14])(o, d + 1, 0);
            o = *(O **)(p + (i << 2) + 0x80);
            ((void (*)(O *))o->vt[10])(o);
            seen = 1;
        } else {
            o = *(O **)(p + (i << 2) + 0x80);
            ((void (*)(O *))o->vt[11])(o);
        }
    }

    if (seen == 0) {
        O *o = *(O **)(p + 0x90);
        ((void (*)(O *, int32_t, int32_t))o->vt[14])(o, 1, 0);
        o = *(O **)(p + 0x90);
        ((void (*)(O *))o->vt[10])(o);
    }
}
