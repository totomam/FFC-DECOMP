#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_02021338(uint32_t code);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *heap, uint32_t id);
extern void func_02005988(void *dst, void *src);
extern void *func_02033338(void *obj, void *a, void *b, uint32_t c);
extern void func_020059cc(void *object);
extern void func_02033420(void *obj, void *a, void *b);
extern void *func_ov008_021a1458(void *self, Pair p);
extern void *func_02062a30(void *owner);
extern void func_02056bc0(void *object, void *node);
extern void *data_020b8e44;
extern Pair data_ov008_021a8944;

int func_ov008_021a1374(uint8_t *self)
{
    uint32_t s18[3];
    uint32_t sc[3];
    uint32_t s0[3];
    void *r7;
    void *r6;
    void *r4p;
    uint8_t *t;
    uint32_t n;

    void *obj;
    void **vt;

    n = 0x41 << 2;
    if (self[n] == 0) {
        func_02021338(0xc7);
        return 0;
    }
    obj = *(void **)(self + (n + 0x30));
    vt = *(void ***)obj;
    ((void (*)(void *))vt[11])(obj);

    n += 0x50;
    *(uint32_t *)(self + n) = 0;
    n = 0;

    r7 = func_0205681c(0xb8);
    if (r7 != 0) {
        func_02005988(s18, func_020159c8(data_020b8e44, 0xd6));
        n = 1;
        r7 = func_02033338(r7, s18, self + 0x154, 0);
    }
    if (n != 0) {
        func_020059cc(s18);
    }

    func_02005988(sc, func_020159c8(data_020b8e44, 0xcb));
    func_02005988(s0, func_020159c8(data_020b8e44, 0xcc));
    func_02033420(r7, sc, s0);
    func_020059cc(s0);
    func_020059cc(sc);


    r6 = func_ov008_021a1458(self, data_ov008_021a8944);
    r4p = func_02062a30(*(void **)(self + 0x134));
    t = self + 0x14;
    func_02056bc0(t, r7);
    func_02056bc0(t, r4p);
    func_02056bc0(t, r6);
    return 1;
}
