#include "ffc/types.h"
extern void *func_02078100(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void *func_02077b80(void *a, uint32_t b);
extern void func_02077aa4(void *a, void *b);
void *func_0207ac88(uint32_t *p, uint32_t size, uint32_t x, uint32_t y, uint32_t z)
{
    uint32_t *r = (uint32_t *)func_02078100(p[0], ((size + 0x1f) & ~0x1f) + 0x20, 0x20, y);
    if (r == 0) return 0;
    void *q = func_02077b80(p + 1, 0);
    r[2] = size;
    r[3] = x;
    r[4] = y;
    r[5] = z;
    func_02077aa4(q, r);
    return r + 8;
}
