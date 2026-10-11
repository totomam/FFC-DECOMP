#include "ffc/types.h"

extern void *func_0206c030(void *object);
extern void func_02056844(void *object);
extern void func_ov002_021d3130(void *object);
extern char data_ov002_021d78a8[];
extern char data_ov002_021d78c0[];

typedef struct {
    void *vtbl;
    char pad1[0x7c];
    void *f80;
    char pad2[0x80];
    void *f104;
} Obj;

void *func_ov002_021c976c(void *p0) {
    Obj *p = (Obj *)p0;
    void *v;

    p->vtbl = data_ov002_021d78a8;
    p->f80 = data_ov002_021d78c0;
    v = p->f104;
    if (v != 0) {
        if (v != 0) {
            func_0206c030(v);
            func_02056844(v);
        }
        p->f104 = 0;
    }
    func_ov002_021d3130(p);
    return p;
}
