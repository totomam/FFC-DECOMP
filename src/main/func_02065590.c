#include "ffc/types.h"

void func_02065590(int32_t *out, void *obj) {
    uint8_t buf[16];
    uint32_t *p = (uint32_t *)buf;
    int32_t *o = out;
    uint32_t x, y;
    void **vt = *(void ***)obj;
    ((void (*)(uint32_t *, void *))vt[7])(p, obj);
    y = p[3] - p[1];
    x = p[2] - p[0];
    o[0] = (int32_t)x;
    o[1] = (int32_t)y;
}
