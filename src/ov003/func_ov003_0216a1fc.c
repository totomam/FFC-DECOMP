/* cflags: -lang c++ */
#include "ffc/types.h"
struct S2 { uint32_t a, b; };
struct T;
typedef void (T::*PM)(uint32_t, uint32_t, S2, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
struct T {};
struct Obj {
    uint8_t pad0[0x0c];
    uint32_t w0c;
    uint8_t pad1[0x84 - 0x10];
    T *base;
    PM pm;
    uint32_t w90, w94;
    S2 w98;
    uint32_t wa0, wa4, wa8, wac, wb0;
};
extern "C" void func_ov003_0216a1fc(Obj *p);
extern "C" void func_ov003_0216a1fc(Obj *p) {
    (p->base->*p->pm)(p->w90, p->w94, p->w98, p->wa0, p->wa4, p->wa8, p->wac, p->wb0);
    p->w0c = (p->w0c & ~0xffu) | 2;
}
