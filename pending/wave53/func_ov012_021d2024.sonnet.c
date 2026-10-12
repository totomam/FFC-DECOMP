/* cflags: -lang c++ */
#include "ffc/types.h"

struct V4 { uint32_t w[4]; };

struct Node {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual V4 pos();
};
struct Obj {
    virtual void s0(); virtual void s1(); virtual void s2(); virtual void s3();
    virtual void s4(); virtual void s5(); virtual void s6();
    virtual V4 get();
    virtual void s8(); virtual void s9();
    virtual void a28(); virtual void a2c(); virtual int a30();
};

extern "C" {
void func_020628ac(Obj *obj, V4 a);
void func_02056c4c(void *p);
uint32_t func_ov005_02195e2c(Obj *obj, V4 a, V4 b, int c, int d);
void func_02056bc0(void *object, void *node);
void func_ov012_021d2200(void *self, uint8_t idx);
void func_ov012_021d2024(void *self, Node *node);
}

void func_ov012_021d2024(void *self, Node *node)
{
    uint8_t i;
    Obj *obj;
    if (node == 0) {
        obj = *(Obj **)((char *)self + 0x100);
        obj->a2c();
        return;
    }
    obj = *(Obj **)((char *)self + 0x100);
    if (obj->a30() != 0) {
        obj = *(Obj **)((char *)self + 0x100);
        obj->a28();
        func_020628ac(*(Obj **)((char *)self + 0x100), node->pos());
    } else {
        func_02056c4c(*(void **)((char *)self + 0xfc));
        uint32_t r = func_ov005_02195e2c(*(Obj **)((char *)self + 0x100), (*(Obj **)((char *)self + 0x100))->get(), node->pos(), 10, -5);
        func_02056bc0(*(void **)((char *)self + 0xfc), (void *)r);
    }
    for (i = 0; i < 3; i++) {
        if ((void *)node == *(void **)((char *)self + 0xcc + i * 4)) {
            func_ov012_021d2200(self, (uint8_t)(i + 1));
            return;
        }
    }
}
