/* cflags: -lang c++ */
#include "ffc/types.h"

struct Obj;
typedef void (Obj::*Fn)(void);
struct Obj {
    char pad[0x88];
    Fn fn;
};

extern "C" void func_ov007_021a76f0(Obj *o) {
    if (o->fn) {
        (o->*(o->fn))();
    }
}
