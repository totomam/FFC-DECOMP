#include "ffc/types.h"

extern void *func_02069210(void *object);
extern void *func_0203b918(void *a, uint32_t b, int c, int d);
extern void func_02056bc0(void *object, void *node);
extern int data_ov007_021c776c;

typedef struct { uint32_t a; uint32_t b; } S;

typedef struct VT { void *s[15]; } VT;

typedef struct Obj {
    void *vt;
    char pad[0x90];
    void *sub;
} Obj;

void *func_ov007_021ba560(Obj *this, uint32_t p1, uint32_t p2, S s)
{
    Obj *o;

    func_02069210(this);
    this->vt = (void *)&data_ov007_021c776c;
    this->sub = func_0203b918((void *)p2, p1, 2, 1);
    o = (Obj *)this->sub;
    ((void (*)(void *, uint32_t, uint32_t))((VT *)o->vt)->s[0x38 / 4])(o, 2, 0);
    ((void (*)(void *, S))((VT *)((Obj *)this->sub)->vt)->s[0xc / 4])(this->sub, s);
    ((void (*)(void *, uint32_t))((VT *)((Obj *)this->sub)->vt)->s[0x20 / 4])(this->sub, 2);
    ((void (*)(void *))((VT *)((Obj *)this->sub)->vt)->s[0x28 / 4])(this->sub);
    func_02056bc0((char *)this + 0x48, this->sub);
    return this;
}
