#include "ffc/types.h"

extern uint8_t func_02036360(const void *object);
extern void func_02015cf0(void *a, void *b, uint32_t c, uint32_t d, uint32_t e);
extern uint32_t func_0203b9a0(void);
extern void func_ov009_021a09a0(void *p);
extern uint32_t func_020363a4(const void *object);
extern void func_020363ac(void *dst, void *src);
extern void func_02035c18(void *p);
extern void func_02005988(void *dst, void *src);
extern uint32_t func_02028f0c(void *obj, void *s, uint32_t a, void *p);
extern void func_020059cc(void *p);
extern uint32_t func_0203b8bc(uint32_t x);
extern uint32_t func_0202be14(void *a, void *b, void *c, uint32_t d, uint32_t e, void *f, uint32_t g);
extern void func_02024db0(uint32_t a, uint32_t b);
extern void func_02056bc0(void *a, void *b);
extern uint32_t func_0202de74(uint32_t a);
extern uint32_t func_0205681c(uint32_t a);
extern uint32_t func_0202e0c8(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_020363bc(const void *object);
extern uint32_t func_0209a484(uint32_t a, uint32_t b);
extern uint32_t func_0209b5bc(uint32_t a, uint32_t b);
extern uint32_t func_0209af28(uint32_t a, uint32_t b);
extern uint32_t func_0209ab5c(void);
extern void func_0202df08(void *a, void *b);
extern void func_0202dfc0(void *a, void *b);
extern void *data_020b8e44;

void func_ov009_021a07bc(uint8_t *self, void *obj, uint32_t idx)
{
    uint32_t a[3];
    uint32_t b[3];
    uint32_t t28;
    uint32_t str[3];
    uint32_t t24;
    uint32_t t20;
    uint32_t t1c;
    uint32_t s44[3];
    uint32_t s38[3];
    uint32_t t14;
    uint32_t off;
    uint32_t i;
    uint32_t zero;
    void **pp;
    void **p1c0;
    void **pq;
    void **p7;
    uint32_t r6v;
    uint32_t t;
    char *s;
    uint32_t r7;
    void *o;
    uint8_t c;

    zero = 0;
    for (i = zero; i < 3; i++) {
        a[i] = zero;
    }
    c = func_02036360(obj);
    func_02015cf0(data_020b8e44, a, c, 7, 0);

    for (i = 0; i < 3; i++) {
        b[i] = zero;
    }
    c = func_02036360(obj);
    func_02015cf0(data_020b8e44, b, c, 0, 0);

    pp = (void **)(self + 0x5c8);
    pp[idx] = (void *)func_0203b9a0();

    func_ov009_021a09a0(&t28);
    if (func_02036360(obj) && func_020363a4(obj)) {
        func_020363ac(&t24, obj);
        t28 = t24;
        func_02035c18(&t24);
    }

    s = (b[0] & 1) ? (char *)b[2] : (char *)b + 1;
    func_02005988(str, s);
    t20 = t28;
    r7 = func_02028f0c(pp[idx], str, 0, &t20);
    func_02035c18(&t20);
    func_020059cc(str);
    if (r7 == 0) {
        o = pp[idx];
        if (o != 0) {
            void **vt = *(void ***)o;
            ((void (*)(void *))vt[1])(o);
            pp[idx] = 0;
        }
    }

    off = 0x1c0;
    p1c0 = (void **)(self + off);
    p1c0[idx] = (void *)func_0203b8bc(*(uint32_t *)(self + off - 4));

    t1c = t28;
    s = (a[0] & 1) ? (char *)a[2] : (char *)a + 1;
    p7 = (void **)(self + off);
    func_0202be14(p7[idx], s, pp[idx], 1, 0, &t1c, 1);
    func_02035c18(&t1c);
    func_02024db0(*(uint32_t *)((uint8_t *)p7[idx] + 0x34), 0);
    off += 0x10;
    func_02056bc0(*(void **)(self + off), p7[idx]);

    r6v = func_0202de74(*(uint32_t *)((uint8_t *)p7[idx] + 0x34));
    t = func_0205681c(0x78);
    if (t != 0) {
        t = func_0202e0c8(t, p7[idx], r6v, 1);
    }
    pq = (void **)(self + 0x1ec);
    pq[idx] = (void *)t;

    t14 = func_020363bc(obj);
    s44[0] = 0;
    t = func_0209b5bc(func_0209a484(*(uint32_t *)((uint8_t *)t14 + 0x88), 0), 0x45800000);
    func_0209af28(0x45800000, t);
    s44[1] = func_0209ab5c();
    s44[2] = 0;
    func_0202df08((uint8_t *)pq[idx] + 0x14, s44);

    s38[0] = 0;
    s38[1] = *(uint32_t *)((uint8_t *)t14 + 0x84);
    t14 += 0x8c;
    s38[2] = *(uint32_t *)((uint8_t *)t14);
    func_0202dfc0((uint8_t *)pq[idx] + 0x14, s38);
    func_02056bc0(*(void **)(self + off), pq[idx]);

    func_02035c18(&t28);
    func_020059cc(b);
    func_020059cc(a);
}
