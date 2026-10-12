#include "ffc/types.h"

extern void func_ov001_021863d0(void *obj, uint32_t flags);
extern void func_ov001_021863d4(void *obj, uint32_t v, uint32_t h);
extern void func_ov001_021863dc(void *obj, uint32_t v);
extern int32_t func_ov000_02168768(void *x);
extern void *func_ov000_0216876c(void *x, int32_t i);
extern void func_ov001_02185e30(void *obj, uint32_t a, uint32_t b);
extern void func_ov001_02185df4(void *obj, uint32_t a, uint32_t b);
extern uint32_t func_02092864(const uint8_t *text);
extern uint32_t func_ov001_021863e4(void *obj);
extern void func_ov001_021863e0(void *obj, uint32_t v);

int32_t func_ov001_021876ec(uint8_t *a, void *obj, uint8_t *p, int32_t n, int32_t flag5)
{
    uint8_t flags;
    int32_t count;
    int32_t orig = n;
    int32_t i;
    uint32_t v18;
    uint16_t hw[2];
    uint32_t f;
    uint32_t *e;
    uint32_t skip;
    uint32_t b;

    flags = *p;
    func_ov001_021863d0(obj, flags);
    p += 5;
    n -= 5;
    if (flags & 0x10) {
        p += 2;
        n -= 2;
    }
    if (flags & 2) {
        uint8_t *q = (uint8_t *)&v18;
        q[0] = p[0];
        q[1] = p[1];
        q[2] = p[2];
        q[3] = p[3];
        n -= 4;
        p += 4;
    } else {
        v18 = 0;
    }
    if (flags & 0x20) {
        uint8_t *q = (uint8_t *)&hw[0];
        q[0] = p[0];
        q[1] = p[1];
        n -= 2;
        p += 2;
    } else {
        hw[0] = *(uint16_t *)(a + 0x6ac);
    }
    func_ov001_021863d4(obj, v18, hw[0]);
    if (flags & 8) {
        uint8_t *q = (uint8_t *)&v18;
        q[0] = p[0];
        q[1] = p[1];
        q[2] = p[2];
        q[3] = p[3];
        n -= 4;
        p += 4;
        func_ov001_021863dc(obj, v18);
    }
    if (flags & 0x40) {
        count = func_ov000_02168768(*(void **)(a + 8));
        for (i = 0; i < count; i++) {
            e = (uint32_t *)func_ov000_0216876c(*(void **)(a + 8), i);
            switch (e[1]) {
            case 1:
                func_ov001_02185e30(obj, e[0], p[0]);
                p++;
                n--;
                break;
            case 2: {
                uint16_t hv;
                uint8_t *q = (uint8_t *)&hw[1];
                q[0] = p[0];
                q[1] = p[1];
                hv = hw[1];
                func_ov001_02185e30(obj, e[0], (uint16_t)(((hv >> 8) & 0xff) | ((hv << 8) & 0xff00)));
                p += 2;
                n -= 2;
                break;
            }
            case 0:
                if (flag5) {
                    b = p[0];
                    p++;
                    n--;
                } else {
                    b = 0xff;
                }
                if (b == 0xff) {
                    func_ov001_02185df4(obj, e[0], (uint32_t)p);
                    skip = func_02092864(p) + 1;
                    p += skip;
                    n -= skip;
                } else {
                    func_ov001_02185df4(obj, e[0], *(uint32_t *)(a + 0x84 + (b << 2)));
                }
                break;
            }
        }
        f = func_ov001_021863e4(obj);
        func_ov001_021863e0(obj, (uint8_t)(1 | f));
    }
    if (flags & 0x80) {
        while ((int8_t)p[0] != 0 && n > 0) {
            uint8_t *s = p;
            skip = func_02092864(p) + 1;
            p += skip;
            n -= skip;
            func_ov001_02185df4(obj, (uint32_t)s, (uint32_t)p);
            skip = func_02092864(p) + 1;
            p += skip;
            n -= skip;
        }
        n--;
        f = func_ov001_021863e4(obj);
        func_ov001_021863e0(obj, (uint8_t)(2 | f));
    }
    f = func_ov001_021863e4(obj);
    if (!(flags & 0xc0)) {
        if ((f & 1) || (f & 2)) {
            func_ov001_021863e0(obj, (uint8_t)(f & 0xfc));
        }
    }
    return orig - n;
}
