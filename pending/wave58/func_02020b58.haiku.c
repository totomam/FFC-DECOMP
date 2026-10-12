#include "ffc/types.h"

typedef struct { int32_t x, y; } Vec2;
typedef struct { int32_t a, b, c, d; } Quad;

#define OBJ(s) (*(void **)((uint8_t *)*(void **)((uint8_t *)(s) + 0x1c) + 0x1c))
#define FLD(s, off) (*(int32_t *)((uint8_t *)(s) + (off)))

extern void *func_0203b688(int32_t v);
extern uint32_t func_02060d58(void *o);
extern void *func_02060c28(void *o);
extern void *func_02060c2c(void *o);
extern uint32_t func_02060cf0(void *o, Quad a, Quad b, int32_t c, int32_t d);
extern uint32_t func_02060c54(void *o, uint32_t v);
extern uint32_t func_02060c7c(void *o, uint32_t v);
extern uint32_t func_02060c30(void *o);
extern void func_02056bc0(void *object, void *node);

void *func_02020b58(void *self, int32_t x0, int32_t y0, int32_t x1, int32_t y1)
{
    Vec2 v;
    Vec2 p;
    Quad q2;
    int32_t x, y;
    int32_t *pm;
    void *r4;
    uint32_t val, r20, r6v, r7v, r24, r28, r2c, n1c;
    void *o7;
    void *o6;

    v = ((Vec2 (*)(void *))(*(void ***)self)[4])(self);
    p = v;
    x = p.x;
    y = p.y;
    q2.c = (FLD(self, 0x80) << 3) + x;
    q2.a = (FLD(self, 0x78) << 3) + x;
    q2.b = (FLD(self, 0x7c) << 3) + y;
    q2.d = (FLD(self, 0x84) << 3) + y;

    pm = (x0 < q2.c) ? &x0 : &q2.c;
    pm = (q2.a < *pm) ? pm : &q2.a;
    x0 = *pm;
    pm = (x1 < q2.c) ? &x1 : &q2.c;
    pm = (q2.a < *pm) ? pm : &q2.a;
    x1 = *pm;
    pm = (y0 < q2.d) ? &y0 : &q2.d;
    pm = (q2.b < *pm) ? pm : &q2.b;
    y0 = *pm;
    pm = (y1 < q2.d) ? &y1 : &q2.d;
    pm = (q2.b < *pm) ? pm : &q2.b;
    y1 = *pm;

    {
        Quad q1;
        q1.a = x0; q1.b = y0; q1.c = x1; q1.d = y1;
        r4 = func_0203b688(y1);
        n1c = func_02060d58(OBJ(self));
        o7 = func_02060c28(OBJ(self));
        r20 = func_02060cf0(o7, q1, q2, 8, 1);
    }
    o6 = func_02060c2c(OBJ(self));
    val = ((uint32_t (*)(void *))(*(void ***)self)[13])(self);
    r6v = func_02060c54(o6, 0x3f ^ val);
    r7v = func_02060c54(func_02060c28(OBJ(self)), 0x3f);
    r24 = func_02060c7c(func_02060c2c(OBJ(self)), 1);
    r28 = func_02060c7c(func_02060c28(OBJ(self)), 1);
    r2c = func_02060c30(func_02060c28(OBJ(self)));
    func_02056bc0(r4, (void *)func_02060d58(OBJ(self)));
    func_02056bc0(r4, (void *)r2c);
    func_02056bc0(r4, (void *)r28);
    func_02056bc0(r4, (void *)r24);
    func_02056bc0(r4, (void *)r7v);
    func_02056bc0(r4, (void *)r6v);
    func_02056bc0(r4, (void *)r20);
    func_02056bc0(r4, (void *)n1c);
    return r4;
}
