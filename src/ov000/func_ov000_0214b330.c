#include "ffc/types.h"

typedef void *(*AllocFn)(uint32_t);
typedef void (*FreeFn)(void *);

extern void func_ov000_02147c54(void *a, uint32_t b, uint32_t c, uint32_t d, void *e);
extern void func_ov000_0214b038(uint8_t *p, uint32_t v);
extern void func_02084ca4(void *dst, void *src, uint32_t n);
extern void func_ov000_0214cf04(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_ov000_021497f8(void);
extern void func_ov000_0214cb0c(void *a, void *b, void *c, uint32_t d, void *e);
extern void func_ov000_02149828(uint32_t x);
extern void func_ov000_0214ac74(void *a, void *b, uint32_t c);
extern uint8_t data_ov000_021695fc[];
extern AllocFn data_ov000_0216bc74;
extern FreeFn data_ov000_0216bca4;

void func_ov000_0214b330(uint8_t *ctx)
{
    int i, m; uint8_t *p1; uint16_t lo; uint8_t *p0, *a, *b, *c, *p, *q, *buf;
    uint16_t *w;
    uint32_t t;
    int h;
    uint8_t *r4;
    uint8_t *s = *(uint8_t **)(ctx + 0xc);
    int n;
    int o1, o2;

    if (s[0x5ac]) {
        func_ov000_02147c54(data_ov000_021695fc, 7, 0, 0, ctx);
    }
    s[0] = 3;
    s[1] = 0;
    func_ov000_0214b038(s + 2, 0x2e);

    o1 = 0x594;
    n = *(uint32_t *)(s + o1);
    h = (uint32_t)(((int)(n << 1)) / 2);

    buf = data_ov000_0216bc74(n);
    if (buf == 0) {
        s[0x455] = 9;
        return;
    }
    buf[0] = 0;
    buf[1] = 2;
    func_ov000_0214b038(buf + 2, n - 0x33);
    buf[n - 0x31] = 0;
    func_02084ca4(s, buf + n - 0x30, 0x30);

    r4 = data_ov000_0216bc74(h * 8);
    if (r4 == 0) {
        data_ov000_0216bca4(buf);
        s[0x455] = 9;
        return;
    }

    a = r4 + h * 2;
    b = a + h * 2;
    c = b + h * 2;

    func_ov000_0214cf04(a, buf, n, h);
    o1 += 0xc;
    func_ov000_0214cf04(b, s + (o1 - 8), *(uint32_t *)(s + o1), h);
    o2 = 0x494;
    func_ov000_0214cf04(c, s + o2, n, h);
    t = func_ov000_021497f8();
    func_ov000_0214cb0c(r4, a, b, h, c);
    func_ov000_02149828(t);

    q = data_ov000_0216bc74(n + 0x49);
    if (q == 0) {
        data_ov000_0216bca4(buf);
        data_ov000_0216bca4(r4);
        o2 -= 0x3f;
        s[o2] = 9;
        return;
    }

    q[0] = 0x16;
    q[1] = 3;
    q[2] = 0;
    q[3] = (uint8_t)((n + 4) >> 8);
    q[4] = (uint8_t)(n + 4);
    q[5] = 0x10;
    q[6] = (uint8_t)((int)n >> 16);
    q[7] = (uint8_t)((int)n >> 8);
    q[8] = (uint8_t)n;

    p0 = q + 9;
    p = p0;
    w = (uint16_t *)r4;
    if (n & 1) {
        p = p0 + 1;
        p0[0] = (uint8_t)w[(int)n / 2];
    }
    m = (int)n / 2;
    for (i = m - 1; i >= 0; i--) {
        p[0] = (uint8_t)(w[i] >> 8);
        lo = w[i];
        p1 = p + 1;
        p += 2;
        *p1 = (uint8_t)lo;
    }

    func_ov000_02147c54(q, n + 9, 0, 0, ctx);
    func_ov000_0214ac74(s, q + 5, n + 4);

    data_ov000_0216bca4(q);
    data_ov000_0216bca4(r4);
    data_ov000_0216bca4(buf);
}
