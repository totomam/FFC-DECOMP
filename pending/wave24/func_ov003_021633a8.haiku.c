#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    void (**vtbl)(Obj *);
};

extern void func_02056bf4(void *a, void *b);
extern int func_0203c318(void);
extern void func_020591f4(int a, int b);

void func_ov003_021633a8(uint8_t *p)
{
    Obj *obj;

    func_02056bf4(p + 0x48, *(void **)(p + 0x9c));
    obj = *(Obj **)(p + 0x9c);
    if (obj != 0) {
        obj->vtbl[1](obj);
    }
    *(void **)(p + 0x9c) = 0;
    int r = func_0203c318();
    func_020591f4(r, 0);
}
