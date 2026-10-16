/* cflags: -lang c++ */
#include "ffc/types.h"
struct P { int a, b; };
struct T { int x; };
typedef void (T::*MF)(int,int,int,P);
struct S {
  uint8_t pad[0xc]; uint32_t flags;
  uint8_t pad2[0x84-0x10];
  T *obj; MF mf; int a,b,c; P p;
};
extern "C" void func_ov003_0214e660(S *s);
extern "C" void func_ov003_0214e660(S *s) {
  (s->obj->*s->mf)(s->a, s->b, s->c, s->p);
  s->flags = (s->flags & ~0xff) | 2;
}
