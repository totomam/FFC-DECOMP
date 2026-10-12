/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj;
struct Quad { int32_t a, b, c, d; };
struct Pt { int32_t x, y; };

extern "C" {
void *func_0203b688(void);
void *func_02060d58(void *);
void *func_02060c28(void *);
int32_t func_02060cf0(void *, Quad, Quad, int32_t, int32_t);
int32_t func_02060ca4(void *, Quad);
void *func_02060c2c(void *);
void *func_02060c54(void *, int32_t);
int32_t func_02060c7c(void *, int32_t);
int32_t func_02060c30(void *);
void func_02056bc0(void *, void *);
void *func_02020cf8(struct Obj *self, Quad q);
}

struct Obj {
 virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
 virtual Pt pos(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
 virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual int32_t flag();
};
inline const int32_t &mn(const int32_t &a, const int32_t &b) { return a < b ? a : b; }
inline const int32_t &mx(const int32_t &a, const int32_t &b) { return a < b ? b : a; }

#define F(off) (*(int32_t *)((uint8_t *)self + (off)))
#define CH (*(void **)((uint8_t *)(*(void **)((uint8_t *)self + 0x1c)) + 0x1c))

void *func_02020cf8(Obj *self, Quad q)
{
    Pt o = self->pos();
    Quad r;
    r.a = (F(0x78) << 3) + o.x;
    r.b = (F(0x7c) << 3) + o.y;
    r.c = (F(0x80) << 3) + o.x;
    r.d = (F(0x84) << 3) + o.y;
    q.a = mx(r.a, mn(q.a, r.c));
    q.b = mx(r.b, mn(q.b, r.d));
    q.c = mx(r.a, mn(q.c, r.c));
    q.d = mx(r.b, mn(q.d, r.d));

    void *obj = func_0203b688();
    void *v1 = func_02060d58(CH);
    int32_t v2 = func_02060cf0(func_02060c28(CH), r, q, 8, 1);
    int32_t v3 = func_02060ca4(func_02060c28(CH), r);
    void *r6 = func_02060c2c(CH);
    int32_t x = self->flag();
    r6 = func_02060c54(r6, 0x3f ^ x);
    void *r7 = func_02060c54(func_02060c28(CH), 0x3f);
    int32_t v4 = func_02060c7c(func_02060c2c(CH), 1);
    int32_t v5 = func_02060c7c(func_02060c28(CH), 1);
    int32_t v6 = func_02060c30(func_02060c28(CH));
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
