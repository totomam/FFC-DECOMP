#include "ffc/types.h"

extern void *func_ov003_021464f4(void *a, void *b);
extern void func_ov003_0215c29c(void *a, void *b);
extern void func_ov003_02158154(void *a, uint32_t b, uint32_t c);
extern void *func_ov003_0215c2d0(void *a);
extern void func_ov003_0215818c(void *a, uint32_t b, uint32_t c);
extern void func_ov003_0215c2ec(void *a, uint32_t b, uint32_t c, uint32_t d);
extern int32_t *func_ov003_02155b40(void *a);
extern void func_0202b258(uint32_t a, uint32_t b, int32_t c);
extern void func_0202b264(uint32_t a, uint32_t b);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint32_t data_ov003_0217a21c[];

void func_ov003_0215c494(void *p)
{
    uint8_t *s = (uint8_t *)p;
    void *r6;
    uint8_t r4;
    int32_t *t;
    volatile int32_t dx;
    int32_t dy;
    uint64_t p1, p2, sum;
    uint32_t *d;
    volatile uint16_t *cnt = (volatile uint16_t *)0x040002b0;
    uint32_t *res = (uint32_t *)0x040002b8;

    if (*(uint32_t *)(s + 0xa0) == 0) {
        return;
    }
    r6 = func_ov003_021464f4(*(void **)(s + 0x98), *(void **)(s + 0xa4));
    if (r6 == 0) {
        return;
    }
    r4 = *(uint8_t *)(s + 0xa8);
    func_ov003_0215c29c(p, r6);
    if (*(uint8_t *)(s + 0xa8) != 0 && r4 == 0) {
        {
            d = data_ov003_0217a21c;
            func_ov003_02158154(r6, d[2], *(uint32_t *)(s + 0xa0));
            {
                void *ret = func_ov003_0215c2d0(p);
                if (ret != 0) {
                    func_ov003_0215818c(ret, d[1], *(uint32_t *)(s + 0xa0));
                }
            }
            func_ov003_0215c2ec(p, 0, 0, 0);
        }
        return;
    }
    if (*(uint8_t *)(s + 0xa8) != 0) return;
    if (r4 != 0) {
        t = func_ov003_02155b40(r6);
        *(int32_t *)(s + 0xac) = t[2];
        *(int32_t *)(s + 0xb0) = t[3];
        r4 = 0;
        func_ov003_0215c2ec(p, 0, 0, 0);
        func_ov003_0215c2d0(p);
        func_0202b258(*(uint32_t *)(s + 0xa0), 0, r4 - 1);
        func_0202b264(*(uint32_t *)(s + 0xa0), 1);
        return;
    }
    t = func_ov003_02155b40(r6);
    dx = *(int32_t *)(s + 0xac) - t[2];
    dy = *(int32_t *)(s + 0xb0) - t[3];
    *cnt = 1;
    p1 = func_0209a71c((uint64_t)(int64_t)dy, (uint64_t)(int64_t)dy);
    p2 = func_0209a71c((uint64_t)(int64_t)dx, (uint64_t)(int64_t)dx);
    sum = p1 + (uint32_t)(0x040002b0u >> 14) + p2;
    res[0] = (uint32_t)sum;
    res[1] = (uint32_t)(sum >> 32);
    while (*cnt & 0x8000) {
    }
}
