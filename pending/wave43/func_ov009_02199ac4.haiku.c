#include "ffc/types.h"

typedef struct Obj {
    void **vt;
} Obj;

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Quad;

extern void func_ov005_021971e4(void *self);
extern Obj *func_0203b77c(void *d, uint32_t b, uint32_t c, uint32_t e);
extern void *func_0203b9cc(Pair p, uint32_t x, uint32_t flag);
extern void *func_02066878(const void *object);
extern void func_0205fdc8(void *object, uint32_t value);
extern void *func_0203b878(void *a, void *b);
extern void func_02056bc0(void *object, void *node);
extern void func_02068d58(void *obj, uint32_t a, uint32_t b);

extern char data_ov009_021af910[];
extern char data_ov009_021afaf0[];

void *func_ov009_02199ac4(void *self, Quad q)
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
        void **vt = obj->vt;
        v = ((uint32_t (*)(Obj *))vt[8])(obj);
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
