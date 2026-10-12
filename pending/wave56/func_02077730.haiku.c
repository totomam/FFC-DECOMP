#include "ffc/types.h"

extern void func_02056bc0(void *object, void *node);
extern void func_02076424(void *p);
extern void *func_0205681c(uint32_t size);
extern void func_02087620(void *object);
extern void *func_02056f0c(void *p, uint32_t v);
extern void *func_02076314(void *p);
extern void *func_02056aec(void *p);
extern uint32_t data_020b0b68[];
extern uint32_t data_020b0b54[];
extern uint32_t data_020b2914[];

void func_02077730(void *self)
{
    uint8_t *s;
    uint8_t *node;
    void *r6;
    void *r7;
    void *p;
    void *obj;
    uint32_t t;
    uint32_t a;
    uint32_t b;
    uint32_t *d;
    void **vt;

    vt = *(void ***)self;
    s = (uint8_t *)self;
    t = (uint32_t)((uint32_t (*)(void *, uint32_t))vt[4])(self, 0xb);
    obj = *(void **)(s + 0x84);
    r7 = ((void *(*)(void *))(*(void ***)obj)[0])(obj);
    func_02056bc0(s + 0x48, r7);
    func_02076424(*(void **)(s + 0x80));

    node = (uint8_t *)func_0205681c(0x34);
    if (node) {
        t = *(uint32_t *)(node + 0xc);
        t &= ~0xffu;
        *(uint32_t *)(node + 0xc) = t;
        *(uint32_t **)node = data_020b0b68;
        func_02087620(node + 0x1c);
        t = node[0x10];
        t &= ~0xffu;
        node[0x10] = t;
        t = node[0x11];
        t &= ~0xffu;
        node[0x11] = t;
        t = node[0x12];
        t &= ~0xffu;
        node[0x12] = t;
        *(uint32_t *)(node + 0x14) = 0;
        *(void **)(node + 0x18) = node + 0x14;
        *(uint32_t **)node = data_020b0b54;
        t = node[0x11];
        t &= ~0xffu;
        node[0x11] = 1 | t;
    }

    r6 = func_0205681c(0x18);
    if (r6) {
        r6 = func_02056f0c(r6, 0x1e);
    }

    p = func_02076314(*(void **)(s + 0x80));
    func_02056bc0(node, p);
    func_02056bc0(node, r6);

    r7 = func_02056aec(r7);

    obj = *(void **)(s + 0xa0);
    func_02056bc0(obj, node);
    func_02056bc0(obj, r7);

    d = data_020b2914;
    a = d[0];
    b = d[1];
    *(uint32_t *)(s + 0x88) = a;
    *(uint32_t *)(s + 0x8c) = b;
}
