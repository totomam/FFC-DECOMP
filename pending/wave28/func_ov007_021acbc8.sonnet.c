#include "ffc/types.h"
extern void func_02069600(void *p);
typedef struct Obj { void **vtbl; } Obj;
void func_ov007_021acbc8(void *p)
{
    int i;
    for (i = 0; i < 5; i++) {
        Obj **q = (Obj **)((char *)p + i * 4 + 0xc0);
        if (*q != 0) {
            Obj *o;
            func_02069600(p);
            o = *(Obj **)((char *)p + i * 4 + 0xc0);
            if (o != 0) {
                if (o != 0) ((void (*)(Obj *))o->vtbl[1])(o);
                *(Obj **)((char *)p + i * 4 + 0xc0) = 0;
            }
        }
    }
}
