#include "ffc/types.h"
typedef struct Obj { void (**vt)(struct Obj *); } Obj;
void func_02024c80(uint8_t *p) {
    Obj *x = *(Obj **)(p + 0x178);
    if (x != 0) {
        if (x != 0) {
            x->vt[1](x);
        }
        *(Obj **)(p + 0x178) = 0;
    }
}
