/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj;
typedef void (Obj::*Fn)(void);
struct Obj {
    char pad[0x90];
    Fn fn;
};

extern "C" void func_02073ca0(Obj *o) {
    if (o->fn) {
        (o->*(o->fn))();
    }
}
