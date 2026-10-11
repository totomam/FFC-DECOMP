#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, int n);
extern void func_02069670(void *p, uint32_t v, int n, uint32_t x);

void func_ov012_021cff98(void *a0)
{
    uint8_t *p = (uint8_t *)a0;
    uint32_t idx;
    uint8_t *q;
    uint32_t off;

    off = 0x254;
    func_02069694(p, *(uint32_t *)(p + off), 4);
    func_02069694(p, *(uint32_t *)(p + off), 2);

    idx = 0xe;
    if (p[0x2e5] >= 0xa) {
        idx = p[0x2e5];
    }
    q = p + (idx << 2);
    func_02069670(p, *(uint32_t *)(p + off), 4, *(uint32_t *)(q + off - 0x3c));
    func_02069670(p, *(uint32_t *)(p + off), 2, *(uint32_t *)(q + 0xec));
}
