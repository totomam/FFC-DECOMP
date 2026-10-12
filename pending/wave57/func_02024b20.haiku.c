#include "ffc/types.h"

extern int32_t func_02024a18(void *p, int32_t a1, void *buf, int32_t c);
extern void func_02023074(uint32_t v);
extern void func_02081c54(void);
extern void func_02081c68(void *p);
extern void func_02024010(void *self, void *buf, int32_t flag);
extern int32_t func_02082004(void *a, void *b);
extern uint64_t func_0208121c(uint32_t v);
extern int32_t func_020817e0(int32_t a, uint32_t b, uint32_t c);

int32_t func_02024b20(void *p, int32_t a1, int32_t *out)
{
    int32_t tmp[0x20];
    int32_t s[4];
    uint64_t r;
    uint32_t lo;
    uint32_t hi;
    int32_t x;
    int32_t y;
    uint8_t *obj = (uint8_t *)p;

    func_02024a18(p, a1, &tmp[0x10], 0);
    *(volatile uint32_t *)0x4000440 = 2;
    *(volatile uint32_t *)0x4000444 = 0;
    func_02023074(*(uint32_t *)(obj + 4));
    func_02081c54();
    if (*(void **)(obj + 0xd0) != 0) {
        func_02081c68(*(void **)(obj + 0xd0));
    }
    func_02024010(p, tmp, 1);
    func_02081c68(tmp);

    {
        int16_t v88 = (int16_t)tmp[0x1e];
        *(volatile uint32_t *)0x40005c4 = ((uint32_t)(uint16_t)(int16_t)tmp[0x1c] |
                                          ((uint32_t)(uint16_t)(int16_t)tmp[0x1d] << 16));
        *(volatile uint32_t *)0x40005c4 = (uint16_t)v88;
    }

    do {
        ;
    } while (func_02082004(&s[1], &s[0]) != 0);

    r = func_0208121c((uint32_t)s[0]);
    lo = (uint32_t)r;
    hi = (uint32_t)(r >> 32);

    x = func_020817e0(s[1], lo, hi);
    s[1] = (x + 0x1000) / 2;

    y = func_020817e0(s[2], lo, hi);
    s[2] = (y + 0x1000) / 2;

    *(volatile uint32_t *)0x4000448 = 1;
    out[0] = (s[1] * 0xff + 0x800) >> 12;
    out[1] = 0xbf - ((s[2] * 0xc0 + 0x800) >> 12);

    if (s[1] < 0 || s[2] < 0 || s[1] > 0x1000 || s[2] > 0x1000) {
        return 0;
    }
    return 1;
}
