#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_020095b8(void *dst, uint32_t src);
extern void *func_02063c94(void *obj, void *ctx, uint32_t a, uint32_t b, uint32_t c);
extern void *func_020059cc(void *object);

void *func_0203b918(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) {
    uint32_t local[3];
    void *obj;
    int flag = 0;
    obj = func_0205681c(0x80);
    if (obj != 0) {
        func_020095b8(local, p0);
        flag = 1;
        obj = func_02063c94(obj, local, p1, p2, p3);
    }
    if (flag) {
        func_020059cc(local);
    }
    return obj;
}
