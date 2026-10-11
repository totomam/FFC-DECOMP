#include "ffc/types.h"

extern uint8_t data_020ae6e0[];
extern uint8_t data_020ae6f8[];
extern void func_020553e8(void *p);
extern void func_020558d8(void *p);

typedef struct Obj {
    void *vt0;
    uint8_t pad0[0x14 - 4];
    void *vt1;
    uint8_t pad1[0x58 - 0x18];
    void *p58;
} Obj;

void *func_0203960c(Obj *r0)
{
    Obj *r4 = r0;
    r4->vt0 = data_020ae6e0;
    r4->vt1 = data_020ae6f8;
    if (r4->p58 != 0) {
        func_020553e8(r4->p58);
    }
    func_020558d8((uint8_t *)r4 + 0x14);
    return r4;
}
