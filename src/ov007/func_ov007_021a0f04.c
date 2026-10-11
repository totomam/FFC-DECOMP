#include "ffc/types.h"

void func_ov007_021a0f04(uint8_t *p, int x) {
    if (x != 0) {
        void *o = *(void **)(p + 0x98);
        void **vt = *(void ***)o;
        ((void (*)(void *, int, int))vt[14])(o, 1, 0);
        o = *(void **)(p + 0x98);
        vt = *(void ***)o;
        ((void (*)(void *))vt[10])(o);
    } else {
        void *o = *(void **)(p + 0x98);
        void **vt = *(void ***)o;
        ((void (*)(void *))vt[11])(o);
    }
}
