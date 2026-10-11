#include "ffc/types.h"

extern char data_020ad8ac[];
extern void func_02028b14(void *p);
extern void func_02056858(void *p);

typedef struct Obj {
    void *vt;
    uint8_t pad[0x10];
    void *f14;
} Obj;

void *func_02028e20(Obj *p) {
    p->vt = data_020ad8ac;
    func_02028b14(data_020ad8ac);
    if (p->f14 != 0) {
        func_02056858(p->f14);
    }
    return p;
}
