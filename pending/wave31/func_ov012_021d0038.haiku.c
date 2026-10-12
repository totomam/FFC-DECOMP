#include "ffc/types.h"

extern void func_02069694(void *p, uint32_t v, uint32_t n);
extern void func_02069670(void *p, uint32_t v, uint32_t n, uint32_t w);

void func_ov012_021d0038(void *a)
{
    uint8_t *p = (uint8_t *)a;
    uint32_t off = 0x258;
    uint8_t idx;
    uint32_t i;
    uint8_t *q;

    func_02069694(p, *(uint32_t *)(p + off), 4);
    func_02069694(p, *(uint32_t *)(p + off), 2);

    idx = p[off + 0x8d];
    i = 7;
    if (idx >= 5 && idx < 10) {
        i = idx;
    }

    q = p + (i << 2);
    func_02069670(p, *(uint32_t *)(p + off), 4, *(uint32_t *)(q + 0x218));
    func_02069670(p, *(uint32_t *)(p + off), 2, *(uint32_t *)(q + 0xec));
}
