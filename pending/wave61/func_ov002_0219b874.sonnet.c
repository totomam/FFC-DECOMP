/* cflags: -noO4,p -O4 -lang c++ */
#include "ffc/types.h"
extern "C" void func_02056bc0(void *object, void *node);
struct O { virtual void v0(); virtual void r(); };
struct T {
  uint8_t pad[0x48]; uint8_t list[0xe0]; O *x; O *y;
};
extern "C" void func_ov002_0219b874(T *self, O *a, O *b)
{
    if (self->x != 0) {
        if (a) { if (a) a->r(); }
        if (b) { if (b) b->r(); }
        return;
    }
    self->x = a;
    self->y = b;
    ((void(*)(O*,int,int))(*(void***)a)[14])(a, 2, 0);
    O *n2 = self->y;
    func_02056bc0(self->list, self->x);
    func_02056bc0(self->list, n2);
}
