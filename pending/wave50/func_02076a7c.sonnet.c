/* cflags: -lang c++ */
#include "ffc/types.h"
struct Sub { virtual void v0(); virtual void *v1(void *a); virtual void *v2(void *a, void *b); };
struct Obj {
    virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4();
    virtual void *get(int i);
    uint8_t pad[0x14 - 4];
    uint8_t list[0x84 - 0x14];
    Sub *sub;
    struct P { uint32_t a, b; P& operator=(const P&o){uint32_t x=o.a,y=o.b;a=x;b=y;return *this;} } x88;
    uint8_t pad2[0x94-0x90];
    uint8_t y94[4];
};
extern "C" void func_02056bc0(void *object, void *node);
extern "C" Obj::P data_020b289c;
extern "C" void func_02076a7c(Obj *o)
{
    Obj *t=o;

    func_02056bc0(t->list, t->sub->v1(t->get(5)));
    func_02056bc0(t->list, t->sub->v2(t->get(6), t->y94));
    t->x88 = data_020b289c;
}
