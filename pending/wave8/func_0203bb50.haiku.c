#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *out, void *src);
extern void *func_0205e240(void *obj, void *ctx, uint32_t a, uint32_t b, uint32_t c);
extern void *func_020059cc(void *object);

void *func_0203bb50(void *a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t local[3];
    int init = 0;
    void *r = func_0205681c(0x70);
    if (r != 0) {
        func_020095b8(local, a);
        init = 1;
        r = func_0205e240(r, local, b, c, d);
    }
    if (init) {
        func_020059cc(local);
    }
    return r;
}
