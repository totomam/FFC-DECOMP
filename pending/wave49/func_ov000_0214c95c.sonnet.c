#include "ffc/types.h"

extern void func_02084b2c(void *p, int v, uint32_t n);
extern void func_02084ca4(void *d, const void *s, uint32_t n);
extern int func_ov000_0214c5f0(const uint16_t *p, int n);
extern void func_02090398(void *d, const void *s, uint32_t n);
extern uint32_t func_0209a6d4(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_ov000_0214c848(uint16_t *d, const uint16_t *s, uint32_t v, int n);
extern int func_ov000_0214c798(const uint16_t *a, const uint16_t *b, int n);
extern void func_ov000_0214c6f0(uint16_t *a, const uint16_t *b, const uint16_t *c, int n);

void func_ov000_0214c95c(uint16_t *o0, uint16_t *s1, uint16_t *s2, uint16_t *o3, int n, uint16_t *buf)
{
    uint16_t *t = buf + n;
    uint16_t *r7 = t + n;
    int b, a, k;
    unsigned long long acc;
    unsigned long long s;
    uint32_t v;

    func_02084b2c(t, 0, 4 * n);
    a = func_ov000_0214c5f0(s1, n);
    b = func_ov000_0214c5f0(s2, n);
    if (a <= 0 || b <= 0) {
        goto end;
    }
    k = n - a + b - 1;
    if (k >= n) {
        func_02084ca4(s1, r7, 2 * n);
        goto end;
    }
    func_02084ca4(s1, t + k, 2 * a);
    acc = 0;
    if (b > 2) {
        acc = (unsigned long long)s2[b - 3];
    }
    if (b > 1) {
        acc += (unsigned long long)s2[b - 2] << 16;
    }
    acc += (unsigned long long)s2[b - 1] << 32;

    while (k < n) {
        func_02090398(t + 1, t, 4 * (2 * n - 1));
        s = (unsigned long long)r7[b - 3]
          + ((unsigned long long)r7[b - 2] << 16)
          + ((unsigned long long)r7[b - 1] << 32)
          + ((unsigned long long)r7[b] << 48);
        v = func_0209a6d4((uint32_t)s, (uint32_t)(s >> 32),
                          (uint32_t)acc, (uint32_t)(acc >> 32));
        if (v > 0xffff) {
            v = 0xffff;
        }
        for (;;) {
            func_ov000_0214c848(buf, s2, v, n);
            if (func_ov000_0214c798(r7, buf, n) >= 0) {
                break;
            }
            v--;
        }
        func_ov000_0214c6f0(r7, r7, buf, n);
        *t = (uint16_t)v;
        k++;
    }
end:
    if (o0 != 0) {
        func_02084ca4(t, o0, 2 * n);
    }
    if (o3 != 0) {
        func_02084ca4(r7, o3, 2 * n);
    }
}
