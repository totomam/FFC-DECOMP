#include "ffc/types.h"

extern void func_ov013_021bd36c(void *x);
extern void *func_ov013_021bd47c(void *x);
extern void func_02055ae8(void *x, void *y);
extern void func_0201cf34(void *a, void *b);
extern void func_020849c4(void *dst, void *src, uint32_t n);
extern uint32_t func_0206d120(void *a, void *b, uint32_t n, uint32_t c, uint32_t d);
extern void *func_0205681c(uint32_t size);
extern void *func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *a, void *b);
struct Pair {
    uint32_t a;
    uint32_t b;
};
extern void *func_02032d24(void *obj, struct Pair sz, void *buf, uint32_t a, uint32_t b, uint32_t c);
extern void *func_0206ccd4(void *x);
extern void func_02056bc0(void *object, void *node);
extern void *func_020059cc(void *object);
extern void func_02087620(void *object);
extern void *func_ov013_021c0db0(void *x);

extern void *data_020b93b8;
extern void *data_020b8e44;
extern char data_020b0b68[];
extern char data_020b0b54[];
extern uint32_t data_ov013_021c4b4c[2];


void func_ov013_021c1480(uint8_t *p)
{
    uint8_t obj[0xc];
    struct Pair pr;
    uint8_t buf[0x98];
    uint32_t ret;
    uint32_t flag;
    uint32_t i;
    void *r7;
    void *node;
    uint8_t *r4;
    void *q;
    void *v;

    func_ov013_021bd36c(*(void **)(p + 0xc0));
    *(void **)(p + 0xc8) = func_ov013_021bd47c(*(void **)(p + 0xc0));
    {
        uint8_t *t = p;
        if (p) t = p + 0x80;
        func_02055ae8((uint8_t *)*(void **)(p + 0xc8) + 0x14, t);
    }

    {
        uint8_t *w;
        for (w = p + 0xd0, i = 0x12; i != 0; i--) {
            *w++ = 0;
        }
    }

    func_0201cf34(data_020b93b8, buf);
    func_020849c4(buf, p + 0xd0, 0x12);

    flag = 0;
    ret = func_0206d120(*(void **)(p + 0xc8), p + 0xd0, 0x12, 0, 0);

    r7 = func_0205681c(0xb0);
    if (r7 != 0) {
        void *t = func_020159c8(data_020b8e44, 0x39);
        func_02005988(obj, t);
        pr.a = 0x80;
        pr.b = 0x60;
        r7 = func_02032d24(r7, pr, obj, 4, 0, ret);
        flag = 1;
    }

    node = func_0206ccd4(*(void **)(p + 0xc8));
    func_02056bc0(p + 0x14, node);
    func_02056bc0(p + 0x14, r7);
    func_02056bc0(p + 0x14, (void *)ret);

    if (flag) {
        func_020059cc(obj);
    }

    r4 = (uint8_t *)func_0205681c(0x34);
    if (r4 != 0) {
        *(uint32_t *)(r4 + 0xc) &= ~0xffu;
        *(void **)r4 = data_020b0b68;
        func_02087620(r4 + 0x1c);
        r4[0x10] = (uint8_t)(r4[0x10] & ~0xff);
        r4[0x11] = (uint8_t)(r4[0x11] & ~0xff);
        r4[0x12] = (uint8_t)(r4[0x12] & ~0xff);
        *(uint32_t *)(r4 + 0x14) = 0;
        *(void **)(r4 + 0x18) = r4 + 0x14;
        *(void **)r4 = data_020b0b54;
        r4[0x11] = (uint8_t)(r4[0x11] & ~0xff);
    }

    *(void **)(p + 0xe4) = r4;
    func_02056bc0(p + 0x48, r4);

    q = func_0205681c(0xa4);
    v = q;
    if (q != 0) {
        v = func_ov013_021c0db0(q);
    }
    *(void **)(p + 0xec) = v;
    func_02056bc0(p + 0x48, v);

    *(uint32_t *)(p + 0xb8) = data_ov013_021c4b4c[0];
    *(uint32_t *)(p + 0xbc) = data_ov013_021c4b4c[1];
}
