#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, uint32_t a);
extern void *func_0200aab8(void *dst, void *self, void *local, uint32_t a2, uint32_t a3);
extern void *func_020059cc(void *object);

void *func_0203be48(void *self, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint32_t local[3];
    void *r;
    int flag = 0;

    r = func_0205681c(0x15c);
    if (r != 0) {
        func_020095b8(local, a1);
        flag = 1;
        r = func_0200aab8(r, self, local, a2, a3);
    }
    if (flag) {
        func_020059cc(local);
    }
    return r;
}
