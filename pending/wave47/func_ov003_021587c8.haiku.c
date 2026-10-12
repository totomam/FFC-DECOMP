#include "ffc/types.h"

extern int func_ov003_0215630c(void *p);
extern void *func_ov003_02146494(void *p);
extern void *func_ov003_021464f4(void *p);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);

int func_ov003_021587c8(void *param)
{
    uint8_t *p = (uint8_t *)param;
    uint8_t *q;
    uint8_t *r;
    int64_t d1;
    int64_t d2;
    uint64_t s1;
    uint64_t sum;
    volatile uint16_t *cnt = (volatile uint16_t *)0x40002b0;

    if (*(uint32_t *)(p + 0x110) != 0 &&
        ((uint8_t *)*(void **)(p + 0xa8))[4] == 2 &&
        func_ov003_0215630c(param) != 0) {
        q = (uint8_t *)func_ov003_02146494(*(void **)(p + 0x108));
        if (*(uint32_t *)(q + 0xb0) == 0) {
            return 0;
        }
        r = (uint8_t *)func_ov003_021464f4(*(void **)(p + 0x108));
        if (r == 0) {
            return 0;
        }
        d1 = (int64_t)(*(int32_t *)(r + 0xb8) - *(int32_t *)(p + 0xb8));
        d2 = (int64_t)(*(int32_t *)(r + 0xb4) - *(int32_t *)(p + 0xb4));

        *cnt = 1;
        s1 = func_0209a71c((uint64_t)d1, (uint64_t)d1);
        sum = s1 + func_0209a71c((uint64_t)d2, (uint64_t)d2) + ((uint32_t)cnt >> 14);
        *(volatile uint64_t *)0x40002b8 = sum;

        while (*cnt & 0x8000) {
        }

        if ((int32_t)*(volatile uint32_t *)0x40002b4 <= (int32_t)*(uint32_t *)(*(uint8_t **)(p + 0xa8) + 0x20)) {
            return 1;
        }
    }
    return 0;
}
