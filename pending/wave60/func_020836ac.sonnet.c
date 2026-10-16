/* cflags: -nothumb -lang c++ */
#include "ffc/types.h"
struct S { uint32_t a, b, c; void set(const S &o) volatile { a = o.a; b = o.b; c = o.c; } };
extern "C" void func_020836ac(const S *s, volatile S *d) {
    d->set(*s++); d->set(*s++); d->set(*s++); d->set(*s++);
}
