/* cflags: -lang c++ */
#include "ffc/types.h"

struct Pair { uint32_t a, b; };
struct Obj {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5();
    uint8_t pad[0x7c]; uint32_t f80, f84;
};
extern "C" {
extern void *func_0206975c(void *p);
extern void func_02069848(void *p, uint32_t x);
extern void func_02069dcc(void *p, void *q);
extern Pair data_020b1b68;
void func_0206a48c(Obj *p)
{
    void *q = func_0206975c(p);
    uint32_t v = (*(uint32_t **)((uint8_t *)p + 0x88))[1];
    if (!(v & *(uint32_t *)((uint8_t *)q + 0x8c))) {
        func_02069848(p, 0);
        func_02069dcc(p, q);
        uint32_t x=data_020b1b68.a, y=data_020b1b68.b; p->f80 = x; p->f84 = y;
        return;
    }
    p->v5();
}
}
