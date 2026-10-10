#include "ffc/types.h"

extern void func_02075d1c(void *p);
extern void func_02055abc(void *p);
extern void func_02056844(void *p);
extern char data_020b2610[];
extern char data_020b2624[];

typedef struct Obj {
    void *vt;
    uint8_t pad[0x10];
    void *f14;
} Obj;

void *func_02075c78(void *p)
{
    Obj *o = (Obj *)p;
    o->vt = data_020b2610;
    o->f14 = data_020b2624;
    func_02075d1c(p);
    func_02055abc((uint8_t *)p + 0x14);
    func_02056844(p);
    return p;
}
