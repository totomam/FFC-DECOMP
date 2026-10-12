/* cflags: -lang c++ */
#include "ffc/types.h"

extern "C" {
void func_02021338(uint32_t arg);
uint32_t func_0209a4cc(void);
uint32_t func_0209af28(uint32_t a, uint32_t b);
int32_t func_0209ab90(uint32_t v);
uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
void func_020685b8(void *object, uint32_t first, uint32_t second);
void func_ov003_02177578(void *p);
}

struct VObj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14(int a, int b);
};

struct Obj {
    uint8_t pad0[0xc];
    uint32_t f0c;
    uint8_t pad1[0x80 - 0x10];
    VObj *a80;
    VObj *a84;
    void *a88;
    void *a8c;
    uint32_t a90;
    uint32_t a94;
};

void func_ov003_02177578(void *pp)
{
    Obj *p = (Obj *)pp;
    if (p->a90 == 0) {
        func_02021338(0x170);
    }
    p->a90++;
    uint32_t f = func_0209af28(0x41cccccd, func_0209a4cc());
    p->a94 = f;

    VObj *o = p->a80;
    if (o != 0) {
        int32_t x = func_0209ab90(f);
        o->v14(0x100 - x, 0x70);
    }
    VObj *o2 = p->a84;
    if (o2 != 0) {
        int32_t x = func_0209ab90(p->a94);
        o2->v14(0x104 - x, 0x84);
    }
    void *o3 = p->a88;
    if (o3 != 0) {
        func_02064390(o3, 0x102 - func_0209ab90(p->a94), 0x73);
    }
    void *o4 = p->a8c;
    if (o4 != 0) {
        func_020685b8(o4, 0x10a - func_0209ab90(p->a94), 0x77);
    }
    if (p->a90 >= 10) {
        p->f0c = (p->f0c & ~0xffu) | 2;
    }
}
