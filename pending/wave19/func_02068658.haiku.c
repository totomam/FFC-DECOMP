#include "ffc/types.h"

typedef void (*VFn)(void *);

void func_02068658(void *a) {
    uint32_t *s = (uint32_t *)a;
    void *obj = (void *)s[7];
    s[15] = 0;
    s[11] = 0;
    s[12] = 0;
    s[23] = 0;
    s[24] = 0;
    s[13] = 0;
    s[17] = 0;
    {
        void **vt = *(void ***)obj;
        ((VFn)vt[15])(obj);
    }
    s[25] = 0;
    s[3] &= ~0xffu;
}
