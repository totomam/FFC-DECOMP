#include "ffc/types.h"

extern void *func_0205681c(uint32_t size);
extern void *func_0205f574(void *p, int a, int b, int c);
extern void func_02069210(void *object);
extern void *func_0203b95c(void *a, void *b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern void func_02069320(void *object, uint32_t value);
extern void func_02069404(void *object, uint32_t value);
extern void func_020695ec(void *self, void *obj);
extern void func_02087620(void *object);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, uint32_t b);
extern void *func_02033094(void *a, void *b, int c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern void *func_020059cc(void *object);
extern void *func_0206fb70(void *a, uint32_t b, uint32_t c);
extern void func_02055ae8(void *a, void *b);
extern void *func_0206fb18(void *a);

typedef struct { uint32_t a, b; } Pair;

extern char data_ov013_021c3e84[];
extern uint32_t data_ov013_021c3ce0[];
extern Pair data_ov013_021c3d0c;
extern char data_020b0b68[];
extern char data_020b0b54[];
extern void *data_020b8e44;

#define VT(o, off) ((void (*)())(*(void ***)(o))[(off) / 4])

void func_ov013_021bc8ec(uint8_t *self)
{
    void *a;
    uint8_t *obj4;
    uint8_t *b;
    void *e;
    void *f;
    uint32_t tmp[3];
    uint32_t c1;
    uint32_t c2;
    uint32_t z;
    int flag;
    Pair pr;

    a = func_0205681c(0x50);
    if (a) {
        a = func_0205f574(a, 10, 0, 1);
    }

    obj4 = func_0205681c(0x98);
    if (obj4) {
        func_02069210(obj4);
        *(void **)obj4 = (void *)data_ov013_021c3e84;
        *(void **)(obj4 + 0x94) = func_0203b95c((void *)data_ov013_021c3ce0[1], a, 0, 1);
        VT(*(void **)(obj4 + 0x94), 0x38)(*(void **)(obj4 + 0x94), 2, 0);
        VT(*(void **)(obj4 + 0x94), 0x28)(*(void **)(obj4 + 0x94));
        pr = data_ov013_021c3d0c;
        VT(*(void **)(obj4 + 0x94), 0xc)(*(void **)(obj4 + 0x94), (void *)pr.a, (void *)pr.b);
        func_02056bc0(obj4 + 0x48, *(void **)(obj4 + 0x94));
        func_02069320(obj4, 2);
        func_02069404(obj4, 4);
    }
    *(void **)(self + 0xf4) = obj4;
    func_020695ec(self, obj4);
    func_02056bc0(self + 0x48, a);

    b = func_0205681c(0x34);
    if (b) {
        *(uint32_t *)(b + 0xc) &= ~0xffu;
        *(void **)b = data_020b0b68;
        func_02087620(b + 0x1c);
        b[0x10] &= ~0xff;
        b[0x11] &= ~0xff;
        b[0x12] &= ~0xff;
        *(uint32_t *)(b + 0x14) = 0;
        *(void **)(b + 0x18) = b + 0x14;
        *(void **)b = data_020b0b54;
        b[0x11] &= ~0xff;
    }
    *(void **)(self + 0xf8) = b;

    z = 0;
    flag = 0;
    e = func_0205681c(0xa4);
    if (e) {
        c1 = 0x80;
        c2 = 0x60;
        func_02005988(tmp, func_020159c8(data_020b8e44, 0x1bf));
        e = func_02033094(e, tmp, 1, c1, c2, 4, z);
        flag = 1;
    }
    func_02056bc0(*(void **)(self + 0xf8), e);
    if (flag) {
        func_020059cc(tmp);
    }
    func_02056bc0(self + 0x48, *(void **)(self + 0xf8));

    f = func_0205681c(0x770);
    if (f) {
        f = func_0206fb70(f, 0x401329, 4);
    }
    *(void **)(self + 0xf0) = f;

    func_02055ae8((uint8_t *)*(void **)(self + 0xf0) + 0x14, self ? self + 0xb8 : 0);
    *(uint32_t *)(self + 0xfc) = 0;
    func_02056bc0(self + 0x48, *(void **)(self + 0xf0));

    f = func_0206fb18(*(void **)(self + 0xf0));
    func_02056bc0(self + 0x14, f);
}
