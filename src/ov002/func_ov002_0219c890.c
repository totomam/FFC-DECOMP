#include "ffc/types.h"

extern int func_ov002_0219b664(void *p);

typedef struct {
    uint8_t pad0[0xc];
    uint32_t w0c;
    uint8_t pad10[4];
    void *p14;
} Obj;

void func_ov002_0219c890(Obj *p) {
    if (func_ov002_0219b664(p->p14) == 0) {
        p->w0c = (p->w0c & ~0xffu) | 2;
    }
}
