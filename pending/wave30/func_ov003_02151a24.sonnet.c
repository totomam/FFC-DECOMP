#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void func_ov003_021519b0(void *p, int32_t v);

typedef struct VT {
    void *slot0;
    void (*slot1)(void *self);
} VT;

typedef struct Obj {
    VT *vt;
} Obj;

void func_ov003_02151a24(uint8_t *p)
{
    if (*(int32_t *)(p + 0xa4) == -1)
        return;
    if (*(int32_t *)(p + 0xac) == -1)
        return;
    if (*(Obj **)(p + 0x80) != 0) {
        Obj *x;
        func_02056bf4(p + 0x48);
        x = *(Obj **)(p + 0x80);
        if (x != 0) {
            if (x != 0)
                x->vt->slot1(x);
            *(Obj **)(p + 0x80) = 0;
        }
    }
    func_ov003_021519b0(p, 0);
}
