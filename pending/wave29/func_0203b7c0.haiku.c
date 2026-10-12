#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02005988(void *dst, void *src);
extern void *func_0205d508(void *obj, void *arg1, void *arg2);
extern void *func_020059cc(void *object);

void *func_0203b7c0(void *a, void *b) {
    uint32_t local[3];
    int done = 0;
    void *obj = func_0205681c(0x38);
    if (obj != 0) {
        func_02005988(local, a);
        done = 1;
        obj = func_0205d508(obj, local, b);
    }
    if (done) {
        func_020059cc(local);
    }
    return obj;
}
