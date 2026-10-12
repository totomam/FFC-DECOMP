#include "ffc/types.h"

extern void func_ov000_0214cf04(void *p, int32_t a, int32_t b, int32_t n);
extern int32_t func_ov000_021497f8(void);
extern void func_ov000_0214cda8(void *a, void *b, void *c, int32_t n, void *d);
extern void func_ov000_02149828(int32_t v);
extern void func_ov000_0214c6f0(void *a, void *b, void *c, int32_t n);
extern void func_ov000_0214c7e0(void *a, void *b, void *c, int32_t n);
extern void func_ov000_0214c630(void *a, void *b, void *c, int32_t n);
extern int32_t func_ov000_0214c608(void *a, int32_t n);
extern void func_ov000_0214c6cc(void *a, int32_t n);
extern void func_ov000_0214c95c(int32_t z, void *a, void *b, void *c, int32_t n, void *d);
extern void func_ov000_0214cf3c(void *a, void *b, int32_t c, int32_t n);
extern void *(*data_ov000_0216bc74)(uint32_t size);
extern void (*data_ov000_0216bca4)(void *p);

void func_ov000_0214a33c(void *a0, int32_t a1, int32_t *s)
{
    uint16_t *base;
    uint16_t *t1, *t2, *t3, *t4, *t5, *t6, *t7;
    int32_t n;
    int32_t r;
    int32_t v;

    if (s == 0 || s[0] == 0) {
        return;
    }
    n = (s[0] * 2) / 2 + 1;
    base = (uint16_t *)data_ov000_0216bc74(20 * n);
    if (base == 0) {
        return;
    }
    t1 = base + n;
    t2 = t1 + n;
    t3 = t2 + n;
    t4 = t3 + n;
    t5 = t4 + n;
    t6 = t5 + n;
    t7 = t6 + n;

    func_ov000_0214cf04(base, a1, s[0], n);
    func_ov000_0214cf04(t1, s[7], s[6], n);
    func_ov000_0214cf04(t5, s[3], s[2], n);
    v = func_ov000_021497f8();
    func_ov000_0214cda8(t3, base, t1, n, t5);
    func_ov000_0214cf04(t1, s[9], s[8], n);
    func_ov000_0214cf04(t5, s[5], s[4], n);
    func_ov000_0214cda8(t4, base, t1, n, t5);
    func_ov000_02149828(v);
    func_ov000_0214c6f0(base, t3, t4, n);
    func_ov000_0214cf04(t1, s[11], s[10], n);
    func_ov000_0214c7e0(t2, base, t1, n);
    func_ov000_0214cf04(t1, s[5], s[4], n);
    func_ov000_0214c7e0(base, t2, t1, n);
    func_ov000_0214c630(t2, base, t4, n);
    func_ov000_0214cf04(t1, s[1], s[0], n);
    r = func_ov000_0214c608(t2, n);
    if (r < 0) {
        func_ov000_0214c6cc(t2, n);
        func_ov000_0214c95c(0, t2, t1, t6, n, t7);
        func_ov000_0214c6f0(t6, t1, t6, n);
    } else {
        func_ov000_0214c95c(0, t2, t1, t6, n, t7);
    }
    func_ov000_0214cf3c(a0, t6, 0x30, n);
    data_ov000_0216bca4(base);
}
