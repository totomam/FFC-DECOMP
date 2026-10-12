#include "ffc/types.h"

extern void func_02069670(void *p, uint32_t a, uint32_t b, uint32_t c);
extern void func_02069694(void *p, uint32_t a, uint32_t b);
extern int func_020692e0(uint32_t v);

void func_ov007_0219ad20(void *p0)
{
    uint8_t *p = (uint8_t *)p0;
    func_02069670(p, *(uint32_t *)(p + 0xc0), 4, *(uint32_t *)(p + 0xc8));
    func_02069670(p, *(uint32_t *)(p + 0xc4), 2, *(uint32_t *)(p + 0xc8));
    if (func_020692e0(*(uint32_t *)(p + 0xc4)) == 0) {
        func_02069670(p, *(uint32_t *)(p + 0xc0), 2, *(uint32_t *)(p + 0xc8));
        func_02069694(p, *(uint32_t *)(p + 0xc8), 4);
        func_02069670(p, *(uint32_t *)(p + 0xc8), 4, *(uint32_t *)(p + 0xc0));
    }
    if (func_020692e0(*(uint32_t *)(p + 0xc0)) == 0) {
        func_02069670(p, *(uint32_t *)(p + 0xc4), 4, *(uint32_t *)(p + 0xc8));
        func_02069694(p, *(uint32_t *)(p + 0xc8), 2);
        func_02069670(p, *(uint32_t *)(p + 0xc8), 2, *(uint32_t *)(p + 0xc4));
    }
}
