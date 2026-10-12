/* cflags: -lang c++ */
#include "ffc/types.h"
typedef struct { uint32_t w, h; } S;
extern "C" {
extern void *func_0205681c(uint32_t size);
extern uint32_t func_020159c8(void *a, uint32_t b);
extern void func_02005988(void *obj, uint32_t r);
extern void *func_02033094(void *a, void *obj, uint32_t b, S s, uint32_t e, uint32_t f);
extern void func_020059cc(void *obj);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02056aec(void *x);
extern uint32_t func_020215cc(uint32_t x);
extern void *func_02008ce8(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_ov007_0219b460(void *a, uint32_t b, uint32_t c, uint32_t d);
extern void *data_020b8e44;
extern uint32_t data_ov007_021c3bcc[2];
extern void *data_020b93b8;
extern uint32_t data_ov007_021c3bd4[2];
void func_ov007_021a1f04(uint8_t *self);
}
struct Foo;
inline void *operator new(unsigned long n, int) { return func_0205681c(n); }
struct Obj { uint32_t d[3]; Obj(uint32_t r) { func_02005988(this, r); } ~Obj() { func_020059cc(this); } };

inline S mk(uint32_t w, uint32_t h) { S s; s.w = w; s.h = h; return s; }
struct Foo { char pad[0xa4]; Foo(const Obj &o, S s, uint32_t a, uint32_t b) { func_02033094(this, (void *)&o, 0, s, a, b); } };

void func_ov007_021a1f04(uint8_t *self)
{
    S s;
    void *r4;
    void *h;
    void *node;
    uint32_t c, d, e, f, z;

    if (*(uint32_t *)(self + 0x94) == 1) {
        r4 = new (0) Foo(Obj(func_020159c8(data_020b8e44, 0x36)), mk(0x80, 0x60), 4, 0);
        func_02056bc0(self + 0x48, r4);
        c = func_02056aec(self);
        d = func_020215cc(0x19);
        e = func_02056aec(r4);

        f = (uint32_t)func_0205681c(0x94);
        if (f != 0) {
            f = (uint32_t)func_02008ce8((void *)f, r4, 0, 0);
        }
        z = func_ov007_0219b460(data_020b93b8, data_ov007_021c3bcc[0], data_ov007_021c3bcc[1], 1);

        h = func_0205681c(0x94);
        if (h != 0) {
            h = func_02008ce8(h, r4, 0, 0);
        }

        node = self + 0x14;
        func_02056bc0(node, h);
        func_02056bc0(node, (void *)z);
        func_02056bc0(node, (void *)f);
        func_02056bc0(node, (void *)e);
        func_02056bc0(node, (void *)d);
        func_02056bc0(node, (void *)c);

        *(uint32_t *)(*(uint32_t **)(self + 0x88)) = 5;
    } else {
        *(uint32_t *)(self + 0x80) = data_ov007_021c3bd4[0];
        *(uint32_t *)(self + 0x84) = data_ov007_021c3bd4[1];
    }
}
