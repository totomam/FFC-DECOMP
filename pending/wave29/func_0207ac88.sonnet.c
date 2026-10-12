#include "ffc/types.h"

extern void *func_02078100(void *heap, uint32_t size, uint32_t align, uint32_t a, uint32_t b);
extern void *func_02077b80(void *p, uint32_t z);
extern void func_02077aa4(void *a, void *b);

void *func_0207ac88(void **p, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    uint32_t *n = func_02078100(p[0], ((a + 0x1f) & ~0x1fu) + 0x20, 0x20, c, c);
    if (n != 0) {
        void *q = func_02077b80((uint8_t *)p + 4, 0);
        n[2] = a;
        n[3] = b;
        n[4] = c;
        n[5] = d;
        func_02077aa4(q, n);
        n = (uint32_t *)((uint8_t *)n + 0x20);
    }
    return n;
}
