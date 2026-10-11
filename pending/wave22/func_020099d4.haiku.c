#include "ffc/types.h"

extern uint32_t data_020aadbc[];
extern void func_0204f208(void *a, uint32_t b);

typedef struct Obj {
    void *vt;
    uint8_t pad[0x14 - 4];
    void *f14;
    void *f18;
} Obj;

void *func_020099d4(Obj *p) {
    p->vt = data_020aadbc;
    if (p->f18 != 0) {
        if (p->f18 != 0) {
            void **vt = *(void ***)p->f18;
            ((void (*)(void *))vt[1])(p->f18);
        }
        p->f18 = 0;
    }
    func_0204f208(p->f14, 0);
    return p;
}
