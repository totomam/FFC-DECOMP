#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

typedef void (*Fn)(void);

typedef struct Obj {
    Fn *vt;
} Obj;

extern void *func_02069210(void *object);
extern void *func_0203b918(void *a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern void func_02056bc0(void *object, void *node);
extern char data_ov008_021a8214[];

void *func_ov008_0219d6f8(void *self, void *a1, void *a2, S s)
{
    Obj *o;

    func_02069210(self);
    *(void **)self = data_ov008_021a8214;
    *(void **)((char *)self + 0x94) = a1;
    *(void **)((char *)self + 0x98) = func_0203b918(a2, *(uint32_t *)((char *)a1 + 0xb8), 2, 1);
    o = *(Obj **)((char *)self + 0x98);
    ((void (*)(void *, uint32_t, uint32_t))o->vt[14])(o, 1, 0);
    o = *(Obj **)((char *)self + 0x98);
    ((void (*)(void *, S))o->vt[3])(o, s);
    o = *(Obj **)((char *)self + 0x98);
    ((void (*)(void *, uint32_t))o->vt[8])(o, 1);
    o = *(Obj **)((char *)self + 0x98);
    ((void (*)(void *))o->vt[10])(o);
    func_0205f2f0((void *)func_02064aa8(*(void **)((char *)self + 0x98)), 1);
    func_02056bc0((char *)self + 0x48, *(void **)((char *)self + 0x98));
    return self;
}
