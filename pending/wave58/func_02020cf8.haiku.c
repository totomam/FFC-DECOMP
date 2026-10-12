#include "ffc/types.h"

typedef struct { int32_t a, b, c, d; } Quad;

extern void *func_0203b688(void);
extern void *func_02060d58(void *);
extern void *func_02060c28(void *);
extern int32_t func_02060cf0(void *, Quad, Quad, int32_t, int32_t);
extern int32_t func_02060ca4(void *, Quad);
extern void *func_02060c2c(void *);
extern void *func_02060c54(void *, int32_t);
extern int32_t func_02060c7c(void *, int32_t);
extern int32_t func_02060c30(void *);
extern void func_02056bc0(void *, void *);

#define F(off) (*(int32_t *)((uint8_t *)self + (off)))
#define CH (*(void **)((uint8_t *)(*(void **)((uint8_t *)self + 0x1c)) + 0x1c))

void *func_02020cf8(void *self, Quad q)
{
    int32_t o[2];
    int32_t ax, ay, bx, by, m;
    Quad rect;
    void *obj, *r7, *r6;
    void *v1;
    int32_t v2, v3, v4, v5, v6, v2x;

    ((void (*)(void *, int32_t *))(*(void ***)self)[4])(self, o);

    ax = (F(0x78) << 3) + o[0];
    ay = (F(0x7c) << 3) + o[1];
    bx = (F(0x80) << 3) + o[0];
    by = (F(0x84) << 3) + o[1];

    m = (q.a < bx) ? q.a : bx;
    q.a = (ax < m) ? m : ax;
    m = (q.c < bx) ? q.c : bx;
    q.c = (ax < m) ? m : ax;
    m = (q.b < by) ? q.b : by;
    q.b = (ay < m) ? m : ay;
    m = (q.d < by) ? q.d : by;
    q.d = (ay < m) ? m : ay;

    rect.a = ax;
    rect.b = ay;
    rect.c = bx;
    rect.d = by;

    obj = func_0203b688();
    v1 = func_02060d58(CH);
    r7 = func_02060c28(CH);
    v2 = func_02060cf0(r7, rect, q, 8, 1);
    r7 = func_02060c28(CH);
    v3 = func_02060ca4(r7, rect);
    r6 = func_02060c2c(CH);
    v2x = ((int32_t (*)(void *))(*(void ***)self)[13])(self);
    r6 = func_02060c54(r6, 0x3f ^ v2x);
    r7 = func_02060c54(func_02060c28(CH), 0x3f);
    v4 = func_02060c7c(func_02060c2c(CH), 1);
    v5 = func_02060c7c(func_02060c28(CH), 1);
    v6 = func_02060c30(func_02060c28(CH));
    func_02056bc0(obj, func_02060d58(CH));
    func_02056bc0(obj, (void *)v6);
    func_02056bc0(obj, (void *)v5);
    func_02056bc0(obj, (void *)v4);
    func_02056bc0(obj, r7);
    func_02056bc0(obj, r6);
    func_02056bc0(obj, (void *)v3);
    func_02056bc0(obj, (void *)v2);
    func_02056bc0(obj, v1);
    return obj;
}
