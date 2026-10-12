/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual uint32_t v8(); };

struct Pair{uint32_t a,b;};

struct Quad{uint32_t a,b,c,d;};

extern "C" void func_ov005_021971e4(void *self);
extern "C" Obj *func_0203b77c(void *d, uint32_t b, uint32_t c, uint32_t e);
extern "C" void *func_0203b9cc(Pair p, uint32_t x, uint32_t flag);
extern "C" void *func_02066878(const void *object);
extern "C" void func_0205fdc8(void *object, uint32_t value);
extern "C" void *func_0203b878(void *a, void *b);
extern "C" void func_02056bc0(void *object, void *node);
extern "C" void func_02068d58(void *obj, uint32_t a, uint32_t b);

extern "C" char data_ov009_021af910[];
extern "C" char data_ov009_021afaf0[];

extern "C" void *func_ov009_02199ac4(void *self, Quad q)
{
    Pair p;
    Obj *obj;
    void *t;
    void *node;
    uint32_t v;

    func_ov005_021971e4(self);
    *(void **)self = (void *)data_ov009_021af910;
    obj = func_0203b77c((void *)data_ov009_021afaf0, 0, 0, 0);
    p.a = 0x40;
    p.b = 0x20;
    {
        v = obj->v8();
    }
    t = func_0203b9cc(p, v, 1);
    func_0205fdc8(func_02066878(t), 1);
    node = func_0203b878(t, obj);
    *(void **)((uint8_t *)self + 0x80) = node;
    func_02056bc0((uint8_t *)self + 0x48, node);
    func_02068d58(*(void **)((uint8_t *)self + 0x80), q.a, q.b);
    ((void (*)(void *, uint32_t))((void **)(*(void **)(*(void **)((uint8_t *)self + 0x80))))[8])(*(void **)((uint8_t *)self + 0x80), 2);
    ((void (*)(void *))((void **)(*(void **)(*(void **)((uint8_t *)self + 0x80))))[10])(*(void **)((uint8_t *)self + 0x80));
    return self;
}
