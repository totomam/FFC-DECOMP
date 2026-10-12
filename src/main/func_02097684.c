/* cflags: -lang c++ */
#include "ffc/types.h"

struct O { virtual void f(); };
extern "C" {
extern uint32_t func_020972cc(void);
extern void func_02097e24(void *obj);
extern int data_02144c24;
extern O data_02144d6c;
extern O data_02144de4;
extern O data_02144da8;
extern O data_02144e9c;
}
struct Loc { uint32_t a; uint8_t b; };

extern "C" void *func_02097684(void *p)
{
    volatile Loc loc;
    int *cnt = &data_02144c24;

    loc.a = func_020972cc();
    loc.b = 1;

    cnt[2] = cnt[2] - 1;
    if (cnt[2] == 0) {
        func_02097e24(&data_02144d6c);
        func_02097e24(&data_02144de4);
        func_02097e24(&data_02144da8);
        { O *o = &data_02144e9c; o->f(); }
        { O *o = &data_02144d6c; o->f(); }
        { O *o = &data_02144de4; o->f(); }
        { O *o = &data_02144da8; o->f(); }
    }
    return p;
}
