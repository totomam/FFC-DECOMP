#include "ffc/types.h"

typedef struct Node { uint32_t f0; uint32_t f4; uint32_t f8; } Node;
typedef struct Ctx { uint32_t f0; uint32_t f4; Node *f8; uint32_t fc; uint32_t f10; uint32_t f14; } Ctx;

extern void *data_020b93b8;
extern uint64_t data_0209def4;
extern char data_ov003_0217b4cc[];

extern int func_0201e9bc(void *g);
extern void *func_0205681c(uint32_t size);
extern void *func_02047920(void *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_0201ed80(void *g, uint32_t v);
extern uint64_t func_0201b7b0(void *g);
extern uint64_t func_0201b80c(void *g);
extern void func_0201efbc(void *g, uint32_t v);
extern void func_02056c9c(void *p, uint32_t v);
extern int func_0201bf6c(void *g, uint32_t v);
extern void func_0201bf5c(void *g, uint32_t v, uint32_t w);
extern void *func_020474d0(void *p, uint32_t a, void *b, uint32_t c);
extern uint32_t func_0201c9ac(void *g, uint32_t v);
extern uint32_t func_0201e994(void *g);

void *func_ov003_02171894(Ctx *c, uint32_t sel, uint32_t *out) {
    void *r5 = 0;
    void *p;
    Node *n;
    Node *base;
    uint16_t h;

    switch (sel) {
    case 0: {
        uint32_t flag = 0;
        if (func_0201e9bc(data_020b93b8) == 0) {
            flag = 1;
        }
        if (flag) {
            r5 = func_0205681c(0x80);
            if (r5 != 0) {
                func_02056c9c(r5, 0);
                *(void **)r5 = data_ov003_0217b4cc;
            }
            goto done;
        }
        r5 = func_0205681c(0x88);
        if (r5 != 0) {
            n = c->f8;
            base = 0;
            if (n->f8 != 0) {
                base = (Node *)((uint8_t *)n + n->f8);
            }
            h = *(uint16_t *)((uint8_t *)base + base->f4);
            r5 = func_02047920(r5, c->f4, h, 0);
        }
        *out = 1;
        goto done;
    }
    case 1: {
        uint32_t id = c->f14;
        uint32_t e = func_0201ed80(data_020b93b8, id);
        if (e != 0) {
            uint64_t a = func_0201b7b0(data_020b93b8);
            uint64_t d = a - func_0201b80c(data_020b93b8);
            if (data_0209def4 < d) {
                func_0201efbc(data_020b93b8, id);
                e = 0;
            }
        }
        if (e == 0) {
            r5 = func_0205681c(0x80);
            if (r5 != 0) {
                func_02056c9c(r5, 0);
                *(void **)r5 = data_ov003_0217b4cc;
            }
            goto done;
        }
        r5 = func_0205681c(0x88);
        if (r5 != 0) {
            n = c->f8;
            base = 0;
            if (n->f8 != 0) {
                base = (Node *)((uint8_t *)n + n->f8);
            }
            h = *(uint16_t *)((uint8_t *)base + base->f4 + 2);
            r5 = func_02047920(r5, c->f4, h, 0);
        }
        *out = 1;
        goto done;
    }
    case 2: {
        if (func_0201bf6c(data_020b93b8, 0x2e) != 0) {
            p = func_0205681c(0x88);
            if (p != 0) {
                n = c->f8;
                base = 0;
                if (n->f8 != 0) {
                    base = (Node *)((uint8_t *)n + n->f8);
                }
                h = *(uint16_t *)((uint8_t *)base + base->f4 + 6);
                p = func_02047920(p, c->f4, h, 0);
            }
            { r5 = p; goto done; }
        }
        func_0201bf5c(data_020b93b8, 0x2e, 1);
        p = func_0205681c(0x88);
        if (p != 0) {
            n = c->f8;
            base = 0;
            if (n->f8 != 0) {
                base = (Node *)((uint8_t *)n + n->f8);
            }
            h = *(uint16_t *)((uint8_t *)base + base->f4 + 4);
            p = func_02047920(p, c->f4, h, 0);
        }
        { r5 = p; goto done; }
    }
    case 3: {
        p = func_0205681c(0x98);
        if (p != 0) {
            p = func_020474d0(p, c->f4, 0, c->f14);
        }
        { r5 = p; goto done; }
    }
    case 4: {
        uint32_t a4 = c->fc;
        uint32_t a0 = func_0201c9ac(data_020b93b8, 3);
        uint32_t e = func_0201e994(data_020b93b8);
        uint32_t r2 = 1;
        if (e == c->f10) {
            r2 = 0;
        }
        if (!(a4 == a0 && r2 == 0)) {
            r5 = func_0205681c(0x88);
            if (r5 != 0) {
                n = c->f8;
                base = 0;
                if (n->f8 != 0) {
                    base = (Node *)((uint8_t *)n + n->f8);
                }
                h = *(uint16_t *)((uint8_t *)base + base->f4 + 8);
                r5 = func_02047920(r5, c->f4, h, 0);
            }
        }
        *out = 1;
        goto done;
    }
    default:
        return 0;
    }
done:
    return r5;
}
