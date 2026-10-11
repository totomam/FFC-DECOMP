/* cflags: -lang c++ */
#include "ffc/types.h"
struct S;
typedef void (S::*PM)();
struct S {
    char pad[0x80];
    PM pm;
    int pad2;
    int cnt;
    void run() { cnt++; (this->*pm)(); }
};
extern "C" void func_ov009_021a02f0(S *s) { s->run(); }
