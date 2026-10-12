#include "ffc/types.h"

extern int func_0208cef8(void);
extern void func_02087874(void *p, int x);
extern void *data_02143580[];

int func_0208cf38(uint32_t n, uint32_t a1, uint32_t a2, uint32_t a3) {
    uint32_t *p;
    uint32_t key;
    uint32_t *base;
    int ret;
    int r = func_0208cef8();
    if (r != 0) {
        return r;
    }
    func_02087874(((void **)data_02143580[1])[1], 2);
    base = (uint32_t *)((uintptr_t)&n & ~3u);
    key = *(uint16_t *)(((void **)data_02143580[1])[1]);
    ret = 3;
    p = base + 1;
    while (n != 0) {
        p++;
        if (*(p - 1) == key) {
            ret = 0;
        }
        n--;
    }
    return ret;
}
