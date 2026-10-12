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

void *func_02020b58(void *self, Quad r)
{
    Vec2 v, p;
    Quad q2;
    int32_t *pm;
    void *r4;
    uint32_t val, r20, r6v, r7v, r24, r28, r2c, n1c;
    void *o7;
    void *o6;

    v = ((Vec2 (*)(void *))(*(void ***)self)[4])(self);
    p = v;
    {
    int32_t t4 = FLD(self, 0x84) << 3;
    int32_t t3 = FLD(self, 0x80) << 3;
    int32_t y = p.y, x = p.x;
    int32_t t2 = FLD(self, 0x7c) << 3;
    int32_t t1 = FLD(self, 0x78) << 3;
    q2.b = t2 + y;
    q2.c = t3 + x;
    q2.d = t4 + y;
    q2.a = t1 + x;
    }

    pm = (r.a < q2.c) ? &r.a : &q2.c;
    pm = (q2.a < *pm) ? pm : &q2.a;
    r.a = *pm;
    pm = (r.c < q2.c) ? &r.c : &q2.c;
    pm = (q2.a < *pm) ? pm : &q2.a;
    r.c = *pm;
    pm = (r.b < q2.d) ? &r.b : &q2.d;
    pm = (q2.b < *pm) ? pm : &q2.b;
    r.b = *pm;
    pm = (r.d < q2.d) ? &r.d : &q2.d;
    pm = (q2.b < *pm) ? pm : &q2.b;
    r.d = *pm;

    r4 = func_0203b688(r.d);
    n1c = func_02060d58(OBJ(self));
    o7 = func_02060c28(OBJ(self));
    r20 = func_02060cf0(o7, r, q2, 8, 1);
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
