#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void func_02063520(void *dst, uint32_t src);
extern void *func_02063bd0(void *obj, void *ctx, uint32_t a, uint32_t b, uint32_t c);
extern void func_02063530(void *object);

void *func_0203b8d4(uint32_t p0, uint32_t p1, uint32_t p2, uint32_t p3) {
    uint32_t local[1];
    void *obj;
    int flag = 0;
    obj = func_0205681c(0x80);
    if (obj != 0) {
        func_02063520(local, p0);
        flag = 1;
        obj = func_02063bd0(obj, local, p1, p2, p3);
    }
    if (flag) {
        func_02063530(local);
    }
    return obj;
}
