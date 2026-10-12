#include "ffc/types.h"

extern void func_02084ca4(void *dst, void *src, int n);

typedef void (*VFn)(void *self, int idx, void *buf);
#define VCALL(obj, off) ((VFn)((*(void ***)(obj))[(off) / 4]))

void func_02067eec(uint32_t *p) {
    uint8_t buf1[256];
    uint8_t buf2[256];
    int n;
    int i;
    int count;

    count = (int)(p[9] - p[7]);
    n = (int)(p[8] - p[6]);
    for (i = 0; i < count; i++) {
        VCALL((void *)p[5], 0x50)((void *)p[5], (int)(p[7] + i), buf1);
        VCALL((void *)p[10], 0x50)((void *)p[10], (int)(p[12] + i), buf2);
        func_02084ca4(buf1 + p[6], buf2 + p[11], n);
        VCALL((void *)p[10], 0x54)((void *)p[10], (int)(p[12] + i), buf2);
    }
}
