/* cflags: -lang c++ */
#include "ffc/types.h"

struct O { virtual void f(); };
extern "C" {
extern uint32_t func_020972cc(void);
extern void func_02097f24(void *obj);
extern int data_02144c24;
extern O data_02144cf4;
extern O data_02144d30;
extern O data_02144e20;
extern O data_02144e5c;
}
struct Loc { uint32_t a; uint8_t b; };

extern "C" void *func_0209746c(void *p)
{
    volatile Loc loc;
    int *cnt = &data_02144c24;

    loc.a = func_020972cc();
    loc.b = 1;

    cnt[6] = cnt[6] - 1;
    if (cnt[6] == 0) {
        func_02097f24(&data_02144cf4);
        func_02097f24(&data_02144d30);
        func_02097f24(&data_02144e20);
        { O *o = &data_02144e5c; o->f(); }
        { O *o = &data_02144cf4; o->f(); }
        { O *o = &data_02144d30; o->f(); }
        { O *o = &data_02144e20; o->f(); }
    }
    return p;
}
