#include "ffc/types.h"

extern uint32_t func_ov001_0218def8(void *obj, uint32_t a, uint32_t b);
extern void *func_ov001_0218b160(void *obj, uint32_t a, uint32_t b);
extern void *func_ov001_0218de3c(void *obj, uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_020559d4(void *p);
extern void *func_0205681c(uint32_t size);
extern uint32_t data_ov001_02194680[];
extern uint32_t data_ov001_02194688[];
extern uint32_t data_ov001_02194690[];
extern uint32_t data_ov001_02194698[];
extern char data_020ac6b8[];

typedef struct {
    void *vt;
    uint32_t pad;
    uint32_t f8;
    uint32_t fc;
    uint32_t f10;
    uint8_t f14;
} Node;

void func_ov001_0218b01c(void *obj)
{
    uint8_t *p = (uint8_t *)obj;
    uint32_t r6;
    void *t;
    void *q;
    Node *n;
    uint32_t *d;
    uint32_t *dp;
    uint32_t a1, b1;

    void **vt0 = *(void ***)obj;
    if (((int (*)(void *))vt0[15])(obj) != 0) {
        r6 = 0;
        ((uint32_t (*)(void *, uint32_t))func_ov001_0218def8)(obj, 0);
        dp = data_ov001_02194680;
        a1 = *dp++;
        b1 = *dp++;
        t = func_ov001_0218b160(obj, a1, b1);
        q = func_ov001_0218de3c(obj, 0x8d, 2, 0, r6);
        obj = (uint8_t *)obj + 0x14;
        func_02056bc0(obj, q);
        func_02056bc0(obj, t);
        return;
    }

    if (((int (*)(void *))(*(void ***)obj)[13])(obj) != 0) {
        d = data_ov001_02194688;
        *(uint32_t *)(p + 0xf4) = d[0];
        *(uint32_t *)(p + 0xf8) = d[1];
        return;
    }

    func_020559d4(p + 0xb0);

    if (p[0x107] == 0) {
        return;
    }
    if (p[0x3df] == 0) {
        return;
    }

    if (p[0x108] == 0 || p[0x3e0] == 0) {
        r6 = 0;
        func_ov001_0218def8(obj, 0, p[0x3df]);
        dp = data_ov001_02194698;
        a1 = *dp++;
        b1 = *dp++;
        t = func_ov001_0218b160(obj, a1, b1);
        q = func_ov001_0218de3c(obj, 0x8d, 2, 0, r6);
        obj = (uint8_t *)obj + 0x14;
        func_02056bc0(obj, q);
        func_02056bc0(obj, t);
        return;
    }

    r6 = 0;
    func_ov001_0218def8(obj, 0, p[0x3df]);
    n = (Node *)func_0205681c(0x18);
    if (n != 0) {
        if (*(uint32_t *)(p + 0x6c4) != 0) {
            r6 = 1;
        }
        t = ((void *(*)(void *))(*(void ***)obj)[14])(obj);
        n->f8 = 0;
        n->fc = 0x100b2;
        n->vt = data_020ac6b8;
        n->f10 = (uint32_t)t;
        n->f14 = (uint8_t)r6;
    }
    ((void (*)(void *, void *))(*(void ***)obj)[19])(obj, n);
    d = data_ov001_02194690;
    *(uint32_t *)(p + 0xf4) = d[0];
    *(uint32_t *)(p + 0xf8) = d[1];
}
