#include "ffc/types.h"

extern void *func_0203c044(uint32_t x);
extern void func_02056bc0(void *object, void *node);
extern void func_02056c4c(void *p);

struct VT;
struct Obj {
    struct VT *vt;
};
struct VT {
    void *f0;
    void (*f1)(struct Obj *);
};

int func_0203a17c(void *self)
{
    uint8_t *p = (uint8_t *)self;

    if (*(uint8_t *)(p + 0xbc)) {
        void *r = func_0203c044(10);
        func_02056bc0(p + 0x14, r);
        *(uint8_t *)(p + 0xbc) = 0;
        return 0;
    }
    func_02056c4c(p + 0x48);
    {
        struct Obj *obj = *(struct Obj **)(p + 0x8c);
        if (obj) {
            if (obj) {
                obj->vt->f1(obj);
            }
            *(struct Obj **)(p + 0x8c) = 0;
        }
    }
    return 1;
}
