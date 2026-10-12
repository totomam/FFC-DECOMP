#include "ffc/types.h"

extern int func_ov000_021670e8(void *a, uint32_t b);
extern int func_ov000_02166d80(void *a, uint32_t b, uint8_t *buf, uint8_t *p, int len, int flag);
extern void func_02090398(uint8_t *dst, uint8_t *src, uint32_t n);
extern int func_ov000_02166b94(void *a, uint32_t b, int *out);

int func_ov001_0217870c(uint8_t **p0, void *p1, uint32_t p2, uint32_t *p3, int *out, int flag)
{
    uint32_t b = p2;
    uint8_t *base = *p0;
    uint32_t s0 = p3[0];
    uint32_t c8 = p3[2];
    uint32_t sc = p3[3];
    int diff = (int)c8 - (int)sc;
    uint32_t off = 0;
    int t;
    int local;

    if (diff == 0) {
        return 0;
    }

    t = func_ov000_021670e8(p1, b) - 0x17;
    if (diff > t) {
        int n;
        for (;;) {
            n = func_ov000_021670e8(p1, b) - 0x17;
            if ((uint32_t)n <= 0x17) {
                break;
            }
            if (func_ov000_02166d80(p1, b, base + 0x220, (uint8_t *)(s0 + sc + off), n, 1) == 8) {
                break;
            }
            off += n;
            diff -= n;
            if (diff == 0) {
                break;
            }
        }
    } else {
        func_ov000_02166d80(p1, b, base + 0x220, (uint8_t *)(s0 + sc), diff, 1);
        off = diff;
        diff = 0;
    }

    if (flag != 0) {
        if (off != 0) {
            func_02090398((uint8_t *)s0, (uint8_t *)(s0 + off), (uint32_t)(diff + 1));
            c8 -= off;
        }
    } else {
        sc += off;
    }

    p3[2] = c8;
    p3[3] = sc;
    func_ov000_02166b94(p1, b, &local);
    *out = (local == 3) ? 1 : 0;
    return 0;
}
