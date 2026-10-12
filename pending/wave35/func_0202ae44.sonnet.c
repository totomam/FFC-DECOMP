#include "ffc/types.h"

extern char data_020ad9c4[];
extern void func_02022eb8(void *p);
extern void func_0202b18c(void *p);
extern void func_0202d0e0(void *p);
extern void func_0209d02c(void *p, uint32_t a, uint32_t b, void *fn);
extern void func_02056844(void *p);
extern void func_0202ade8(void);

typedef struct Obj {
    void **vt;
} Obj;

typedef struct Self {
    void *vt;
    uint8_t pad[0x2c];
    void *f30;
    Obj *f34;
} Self;

void *func_0202ae44(void *a)
{
    Self *p = (Self *)a;
    Obj *o = p->f34;
    p->vt = data_020ad9c4;
    if (p->f34 != 0) {
        func_02022eb8(p->f30);
        o = p->f34;
        if (o != 0) {
            if (o != 0)
                ((void (*)(Obj *))o->vt[1])(o);
            p->f34 = 0;
        }
    }
    func_0202b18c(p);
    func_0202d0e0((uint8_t *)p + 0x164);
    func_0209d02c((uint8_t *)p + 0xbc, 0xe, 0xc, (void *)func_0202ade8);
    func_02056844(p);
    return p;
}
