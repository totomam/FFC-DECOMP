#include "ffc/types.h"

typedef struct {
    uint8_t pad[0x98];
    void *a;
    void *b;
} Obj;

extern void func_02056c4c(void *x);
extern void *func_020655dc(void *x, int mode, int zero);
extern void func_02056bc0(void *object, void *node);

void func_ov004_0214d48c(Obj *o, int flag)
{
    if (o->b != 0) {
        func_02056c4c(o->a);
        void *n = func_020655dc(o->b, flag != 0 ? 3 : 7, 0);
        func_02056bc0(o->a, n);
    }
}
