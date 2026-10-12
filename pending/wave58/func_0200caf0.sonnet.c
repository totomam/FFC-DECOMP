#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } Pair;

extern void func_0200bd44(void *o, Pair v);
extern void *func_0203b6fc(void);
extern void *func_02021610(uint32_t a, uint32_t b);
extern void func_02056bc0(void *o, void *n);
extern void *func_02062a78(void *o, Pair w, Pair t, uint32_t c, uint32_t d);
extern void *func_02034d5c(void *o, Pair v, uint32_t c, uint32_t d);
extern void *func_0200bf1c(void *o);
extern void *func_02056aec(void *o);
extern void func_02034e28(void *o);
extern void *func_0203b708(uint32_t x);
extern void *func_02062994(void *o, uint32_t a, uint32_t b);
extern void *func_0203b688(void);

void *func_0200caf0(void *self)
{
    uint8_t *s = (uint8_t *)self;
    void *r4;
    void *obj;
    uint8_t f;
    void *res;
    Pair z1, w1, t1, v1, w2, t2, v2, z2;

    *(uint8_t *)(s + 0xfa) = 0;
    *(uint32_t *)(s + 0xcc) = 0;
    obj = *(void **)(s + 0x94);
    ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, *(Pair *)(s + 0xbc));
    obj = *(void **)(s + 0x88);
    if (obj != 0) {
        ((void (*)(void *, Pair))(*(void ***)obj)[3])(obj, *(Pair *)(s + 0xc4));
    }
    obj = *(void **)(s + 0x8c);
    if (obj != 0) {
        z1.a = 0;
        z1.b = 0;
        func_0200bd44(obj, z1);
    }
    r4 = func_0203b6fc();
    res = func_02021610(0xd1, 0);
    func_02056bc0(r4, res);

    f = s[0xfc];
    if (f == 0) {
        if (*(void **)(s + 0x88) != 0 && f != 2) {
            ((void (*)(Pair *, void *))(*(void ***)(*(void **)(s + 0x88)))[4])(&v1, *(void **)(s + 0x88));
            obj = *(void **)(s + 0x88);
            t1.a = v1.a; t1.b = v1.b + 0x60;
            ((void (*)(Pair *, void *))(*(void ***)obj)[4])(&w1, obj);
            res = func_02062a78(*(void **)(s + 0x88), w1, t1, 0x14, 2);
            func_02056bc0(r4, res);
        }
        {
            ((void (*)(Pair *, void *))(*(void ***)(*(void **)(s + 0x94)))[4])(&v2, *(void **)(s + 0x94));
            obj = *(void **)(s + 0x94);
            t2.a = v2.a; t2.b = v2.b + 0x60;
            ((void (*)(Pair *, void *))(*(void ***)obj)[4])(&w2, obj);
            res = func_02062a78(*(void **)(s + 0x94), w2, t2, 0x14, 2);
            func_02056bc0(r4, res);
        }
        obj = *(void **)(s + 0x90);
        if (obj != 0) {
            z2.a = 0;
            z2.b = 0x60;
            res = func_02034d5c(obj, z2, 0x14, 2);
            func_02056bc0(r4, res);
        }
        obj = *(void **)(s + 0x8c);
        if (obj != 0) {
            if (s[0xfc] == 2) {
                res = func_02056aec(obj);
            } else {
                res = func_0200bf1c(obj);
            }
            func_02056bc0(r4, res);
        }
    } else {
        obj = *(void **)(s + 0x94);
        ((void (*)(void *))(*(void ***)obj)[11])(obj);
        obj = *(void **)(s + 0x90);
        if (obj != 0) {
            func_02034e28(obj);
        }
        obj = *(void **)(s + 0x8c);
        if (obj != 0) {
            res = func_02056aec(obj);
            func_02056bc0(r4, res);
        }
        obj = *(void **)(s + 0x88);
        if (obj != 0) {
            void *r7;
            void *r5;
            void *x;
            r7 = func_0203b708(3);
            r5 = func_02062994(obj, 0, *(uint32_t *)(s + 0xb8) + 0x70);
            x = func_0203b688();
            func_02056bc0(x, r5);
            func_02056bc0(x, r7);
            func_02056bc0(r4, x);
        } else {
            res = func_0203b708(3);
            func_02056bc0(r4, res);
        }
    }
    return r4;
}
