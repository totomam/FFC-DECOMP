#include "ffc/types.h"

extern void func_020553e8(void *p);
extern void func_020558d8(void *p);
extern void func_02056844(void *p);
extern uint8_t data_020ae6e0[];
extern uint8_t data_020ae6f8[];

typedef struct Obj {
    void *vt0;
    uint32_t pad0[4];
    void *vt1;
    uint32_t pad1[16];
    void *f58;
} Obj;

void *func_02039638(Obj *p)
{
    p->vt0 = data_020ae6e0;
    p->vt1 = data_020ae6f8;
    if (p->f58 != 0) {
        func_020553e8(p->f58);
    }
    func_020558d8((uint8_t *)p + 0x14);
    func_02056844(p);
    return p;
}
