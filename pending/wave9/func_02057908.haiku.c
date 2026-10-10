#include "ffc/types.h"

extern void func_0205796c(void *p);
extern void func_02054844(void *p);
extern void func_02056844(void *p);
extern char data_020b0ca4[];
extern char data_020b0cb8[];

typedef struct Obj {
    void *vt;
    uint8_t pad[0x10];
    void *f14;
} Obj;

void *func_02057908(void *p)
{
    Obj *o = (Obj *)p;
    o->vt = data_020b0ca4;
    o->f14 = data_020b0cb8;
    func_0205796c(p);
    func_02054844((uint8_t *)p + 0x14);
    func_02056844(p);
    return p;
}
