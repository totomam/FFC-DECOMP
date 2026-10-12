#include "ffc/types.h"

extern uint64_t func_0209a76c(uint32_t x, uint32_t y);
extern void func_02069670(void *p, uint32_t a, uint32_t n, uint32_t b);

#define P(k, off) (*(uint32_t *)((uint8_t *)p + (k) * 4 + (off)))

void func_ov007_021b6110(void *p)
{
    uint8_t i;

    for (i = 0; i < 10; i++) {
        uint8_t r7 = (uint8_t)(func_0209a76c(i + 1, 5) >> 32);
        uint8_t s = (uint8_t)(func_0209a76c(i + 4, 5) >> 32);
        if (i < 5) {
            func_02069670(p, P(i, 0xc8), 4, P(i, 0xdc));
            func_02069670(p, P(i, 0xc8), 2, P(i, 0xdc));
            func_02069670(p, P(i, 0xc8), 1, P(r7, 0xc8));
            func_02069670(p, P(i, 0xc8), 3, P(s, 0xc8));
        } else {
            func_02069670(p, P(i, 0xc8), 4, P(i, 0xb4));
            func_02069670(p, P(i, 0xc8), 2, P(i, 0xb4));
            func_02069670(p, P(i, 0xc8), 1, P(r7, 0xdc));
            func_02069670(p, P(i, 0xc8), 3, P(s, 0xdc));
        }
    }
}
