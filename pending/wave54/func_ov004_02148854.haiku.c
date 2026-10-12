#include "ffc/types.h"

extern uint32_t data_0213df18;
extern uint32_t data_0213df20;
extern char data_ov004_02158498[];
extern void *data_ov004_02158460[];
extern uint32_t data_ov004_021584a8[];

extern uint32_t func_0204f7d4(uint32_t object);
extern void func_02056c9c(void *object, uint32_t value);
extern void *func_02056dd4(void *object);
extern void *func_0203b81c(uint32_t size);
extern void func_0205f818(void *object, uint32_t value);
extern void *func_0203bb94(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void *func_0205681c(uint32_t size);
extern void *func_ov004_02148ad0(void *a, void *b, void *c, uint32_t d, uint8_t e);
extern void *func_ov004_02149328(void *a, void *b, void *c, void *d, uint32_t e);
extern void *func_ov004_0214980c(void *a, void *b, void *c);

void *func_ov004_02148854(uint8_t *p, void *a, uint32_t b, uint32_t c, uint8_t d)
{
    uint32_t old7;
    void *v;
    void *res;
    void *e;
    void *s;
    void *x;
    void *y;
    void *w;
    uint32_t m0;
    uint32_t m1;

    func_02056c9c(p, func_0204f7d4(data_0213df18));
    *(char **)p = data_ov004_02158498;

    v = func_02056dd4(p);
    old7 = data_0213df20;
    data_0213df20 = (uint32_t)v;

    *(void **)(p + 0x9c) = func_0203b81c(0x28);
    func_0205f818(*(void **)(p + 0x9c), 7);

    x = func_0203bb94(data_ov004_02158460[0], 1, 1, 0);
    *(void **)(p + 0x88) = x;
    ((void (*)(void *))(*(void ***)x)[10])(x);
    x = *(void **)(p + 0x88);
    ((void (*)(void *, uint32_t))(*(void ***)x)[8])(x, 3);
    func_02056bc0(p + 0x48, *(void **)(p + 0x88));

    y = func_0203bb94(data_ov004_02158460[1], 1, 1, 0);
    *(void **)(p + 0x8c) = y;
    ((void (*)(void *))(*(void ***)y)[10])(y);
    y = *(void **)(p + 0x8c);
    ((void (*)(void *, uint32_t))(*(void ***)y)[8])(y, 2);
    func_02056bc0(p + 0x48, *(void **)(p + 0x8c));

    res = func_0205681c(0x1e8);
    if (res != 0) {
        res = func_ov004_02148ad0(res, a, *(void **)(p + 0x9c), c, d);
    }
    *(void **)(p + 0x94) = res;
    func_02056bc0(p + 0x48, res);

    e = func_0205681c(0xb0);
    if (e != 0) {
        y = *(void **)(p + 0x8c);
        w = ((void *(*)(void *))(*(void ***)y)[13])(y);
        e = func_ov004_02149328(e, a, w, *(void **)(p + 0x9c), b);
    }
    *(void **)(p + 0x90) = e;
    func_02056bc0(p + 0x48, e);

    s = func_0205681c(0x94);
    if (s != 0) {
        s = func_ov004_0214980c(s, a, *(void **)(p + 0x9c));
    }
    *(void **)(p + 0x98) = s;
    func_02056bc0(p + 0x48, s);
    func_02056bc0(p + 0x48, *(void **)(p + 0x9c));

    m0 = data_ov004_021584a8[0];
    m1 = data_ov004_021584a8[1];
    *(uint32_t *)(p + 0x80) = m0;
    *(uint32_t *)(p + 0x84) = m1;
    data_0213df20 = old7;
    return p;
}
