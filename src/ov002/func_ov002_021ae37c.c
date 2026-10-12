#include "ffc/types.h"

extern void *func_0203b6fc(void);
extern void *func_0205681c(uint32_t size);
extern int32_t func_ov002_021ae5f4(int32_t x);
extern int64_t func_0209a76c(int32_t a, int32_t b);
extern void func_02056bc0(void *object, void *node);

typedef struct {
    int32_t a;
    int32_t b;
} Pair;
extern Pair func_ov002_021ad50c(int32_t a, int32_t b);

extern uint32_t data_ov002_021d5428[];
extern int32_t data_ov002_021d3ba8[];

typedef struct {
    void *vtbl;
    uint32_t pad04;
    uint32_t pad08;
    uint32_t w0c;
    int32_t f10;
    int32_t f14;
    int32_t f18;
    int32_t f1c;
    int32_t f20;
    int32_t f24;
    int32_t f28;
    int32_t f2c;
    int32_t f30;
    int32_t f34;
    int32_t f38;
    int32_t f3c;
    int32_t f40;
    uint8_t b44;
    uint8_t b45;
} Obj;

typedef void (*Method)(void *self, Pair p);

void *func_ov002_021ae37c(void *ctx, int32_t p1, int32_t p2, int32_t p3, int32_t p4, int32_t mode)
{
    void *ret = func_0203b6fc();
    Obj *o = (Obj *)func_0205681c(0x48);
    if (o != 0) {
        int32_t v;
        int32_t a;
        int32_t sign;
        uint32_t cur = *(uint32_t *)((uint8_t *)ctx + 0x128);
        o->w0c &= ~0xffu;
        o->vtbl = data_ov002_021d5428;
        o->f14 = p4;
        o->f18 = cur;
        o->f1c = p1;
        o->f20 = p2;
        o->f24 = 0;
        o->f28 = 0;
        o->f2c = 0;
        o->f30 = 0;
        o->f38 = 0;
        o->f3c = 0;
        o->f40 = mode;
        o->b44 = (func_ov002_021ae5f4(p4) == 1) ? 1 : 0;
        o->b45 = 0;
        if (o->b44) {
            a = 180 - data_ov002_021d3ba8[o->f1c];
        } else {
            a = data_ov002_021d3ba8[o->f1c];
        }
        o->f38 = a;
        o->f34 = a;
        v = data_ov002_021d3ba8[o->f1c];
        for (;;) {
            if (v == data_ov002_021d3ba8[o->f20]) {
                break;
            }
            if (o->f40 == 1) {
                v += 60;
            } else {
                v += 300;
            }
            v = (int32_t)(func_0209a76c(v, 360) >> 32);
            o->b45++;
        }
        o->f24 = p3 * o->b45;
        switch (o->f40) {
        case 1:
            sign = o->b44 ? -1 : 1;
            { int32_t t = o->b45 * 60; o->f3c = t * sign; }
            break;
        case 0:
            sign = o->b44 ? 1 : -1;
            { int32_t t = o->b45 * 60; o->f3c = t * sign; }
            break;
        }
    }
    func_02056bc0(ret, o);
    {
        void *obj = *(void **)((uint8_t *)ctx + 0x1a0);
        if (obj != 0) {
            Pair q, t;
            Method m;
            t = func_ov002_021ad50c(func_ov002_021ae5f4(p4), p2);
            q.a = t.a;
            q.b = t.b - 6;
            obj = *(void **)((uint8_t *)ctx + 0x1a0);
            m = ((Method *)(*(void **)obj))[3];
            m(obj, q);
        }
    }
    return ret;
}
