#include "ffc/types.h"

typedef struct { uint32_t lo; uint32_t hi; } Pair;

extern void func_02035f58(void *p);
extern void func_0201f460(const void *object, uint32_t index, void *output);
extern uint32_t func_02036418(void *p);
extern void func_0201f36c(const void *object, uint32_t index, void *output);
extern uint32_t func_0203b688(void);
extern uint32_t func_02035ff4(void *object);
extern uint32_t func_02036690(void *object);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *obj, uint32_t off);
extern void func_02005988(void *out, void *src);
extern void *func_02032d24(void *a, Pair size, void *d, uint32_t e, uint32_t f);
extern void *func_020059cc(void *object);
extern uint32_t func_0203b6fc(void);
extern void func_ov011_021c00d8(void *a, void *b, void *c, void *d);
extern void func_ov011_021c012c(void *a, void *b, void *c);
extern void func_ov011_021c2bb4(void *a, void *b);
extern void func_ov011_021c2bec(void *a, void *b, void *c);
extern uint32_t func_0209a76c(uint32_t a, uint32_t b);
extern Pair func_ov009_021ad660(void *a, uint32_t b);
extern void *func_ov011_021c0e1c(void *a, void *b, Pair p0, Pair p1);
extern void *func_ov009_0219a390(void *a, Pair p);
extern void func_0201f534(const void *object, uint32_t index, uint32_t z);
extern uint32_t func_ov011_021c02a8(void *a, Pair p);
extern uint32_t func_0203b72c(void);
extern Pair func_02069724(void *a);
extern uint32_t func_ov011_021c2360(void *a, Pair p, uint32_t r3);
extern void func_02035fd0(void *object);

extern void *data_020b93b8;
extern void *data_020b8e44;
extern Pair data_ov011_021cae68[];
extern Pair data_ov011_021cb1ac;
extern Pair data_ov011_021cb1b4;

void func_ov011_021c23bc(uint8_t *a, uint32_t b)
{
    uint8_t s2[0x60];
    uint8_t s1[0x60];
    uint32_t sp30[3];
    Pair sp28;
    Pair p20;
    Pair p18;
    Pair p10;
    Pair p0;
    uint32_t tc;
    uint32_t t;
    uint32_t *tbl;
    uint32_t idx;
    uint32_t v;
    uint32_t w;
    uint32_t r4;
    uint32_t r6;
    void *obj;
    void *x;
    uint32_t r;
    uint32_t z;

    idx = a[0x27d];
    tbl = *(uint32_t **)(a + 0x1cc);
    v = (uint16_t)tbl[b + idx * 10];
    r4 = b;
    r6 = v;

    func_02035f58(s2);
    func_0201f460(data_020b93b8, v, s2);
    w = (uint16_t)func_02036418(s2);

    func_02035f58(s1);
    func_0201f36c(data_020b93b8, w, s1);
    tc = func_0203b688();

    if (func_02035ff4(s1) == 0 && func_02036690(s1) != 0) {
        obj = *(void **)(a + 0x17c);
        ((void (*)(void *))(*(uint32_t *)(*(uint32_t *)obj + 0x2c)))(obj);
        obj = *(void **)(a + 0x17c);
        r = (uint32_t)func_02062a30(obj);
        func_02056bc0((void *)tc, (void *)r);

        r4 = z = 0;
        r6 = (uint32_t)func_0205681c(0xb0);
        if (r6 != 0) {
            x = func_020159c8(data_020b8e44, 0x1c6);
            func_02005988(sp30, x);
            sp28.lo = 0x80;
            sp28.hi = 0x60;
            r6 = (uint32_t)func_02032d24((void *)r6, sp28, sp30, 4, z);
            r4 = 1;
            z = r4 - 1;
        }
        func_02056bc0(a + 0x14, (void *)r6);
        if (r4 != z) {
            func_020059cc(sp30);
        }
    } else {
        t = func_0203b6fc();
        if (func_02035ff4(s1) != 0) {
            func_ov011_021c00d8(a, a + 0x220, s1, (void *)r6);
            func_ov011_021c012c(a, s1, (void *)r6);
            func_ov011_021c2bb4(a, s2);
            func_ov011_021c2bec(a, s1, (void *)r6);
            idx = func_0209a76c(r4, 5);
            p10 = data_ov011_021cae68[idx];
            p20 = func_ov009_021ad660(a, r4);
            p0 = p20;
            r6 = (uint32_t)func_ov011_021c0e1c(a, s1, p10, p0);
            obj = *(void **)(a + 0xec + r4 * 4);
            r = (uint32_t)func_ov009_0219a390(obj, p10);
            func_02056bc0((void *)t, (void *)r);
            func_02056bc0((void *)t, (void *)r6);
        } else if (func_02036690(s1) == 0) {
            func_ov011_021c2bb4(a, s2);
            func_0201f534(data_020b93b8, r6, 0);
            idx = func_0209a76c(r4, 5);
            obj = *(void **)(a + 0xec + r4 * 4);
            r = (uint32_t)func_ov009_0219a390(obj, data_ov011_021cae68[idx]);
            func_02056bc0((void *)t, (void *)r);
        }
    }

    p18 = func_02069724(a);
    r4 = func_ov011_021c02a8(a, data_ov011_021cb1ac);
    func_02056bc0((void *)tc, (void *)func_0203b72c());
    func_02056bc0((void *)tc, (void *)t);
    func_02056bc0((void *)tc, (void *)r4);

    r4 = func_ov011_021c2360(a, data_ov011_021cb1b4, p18.lo);
    func_02056bc0(a + 0x14, (void *)tc);
    func_02056bc0(a + 0x14, (void *)r4);
    func_02035fd0(s1);
    func_02035fd0(s2);
}
