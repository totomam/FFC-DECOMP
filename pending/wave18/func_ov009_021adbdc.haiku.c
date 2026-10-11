#include "ffc/types.h"

extern void func_02069600(void *a);

typedef struct Obj Obj;
typedef struct VT {
    void *f0;
    void (*f1)(Obj *);
} VT;
struct Obj {
    VT *vt;
};

void func_ov009_021adbdc(void *a, Obj *b)
{
    func_02069600(a);
    if (b != 0) {
        if (b != 0) {
            b->vt->f1(b);
        }
    }
}
