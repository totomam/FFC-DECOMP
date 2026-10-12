#include "ffc/types.h"

extern void func_02021338(uint32_t arg);

void func_ov003_021504a4(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t off = 0x498;
    uint8_t zero = 0;
    void *obj;
    void **vt;
    uint8_t *q;
    uint32_t n;

    if (*(uint32_t *)(p + off) == 1) {
        return;
    }
    if (p[off + 0x20] != zero) {
        return;
    }
    func_02021338(0xad);
    p[off + 0x20] = 1;
    *(uint32_t *)(p + off + 0x1c) = zero;
    obj = *(void **)(p + 0x98);
    vt = *(void ***)obj;
    ((void (*)(void *, int, int))vt[0x38 / 4])(obj, 1, 1);
    off += 0x44;
    q = p + off;
    n = 0x1c;
    do {
        *q++ = zero;
    } while (--n);
}
