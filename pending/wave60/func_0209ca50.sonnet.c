#include "ffc/types.h"
extern void func_0209c2d8(void *a, void *b, uint32_t d);
extern void func_0209d220(void *a, void *b, uint32_t c);
void func_0209ca50(uint32_t *a, uint32_t *b, uint32_t *c, uint32_t d) {
    func_0209c2d8(a, b, d);
    {
        uint8_t *base = (uint8_t *)a[6];
        uint32_t off = c[2];
        uint32_t *q = (uint32_t *)(base + off);
        *(uint32_t *)(base + off) = a[1];
        q[1] = a[0];
        q[2] = a[2];
        q[5] = d;
    }
    func_0209d220(a, b, b[0] + c[1]);
}
