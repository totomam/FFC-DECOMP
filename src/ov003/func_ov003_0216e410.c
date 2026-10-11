#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t);
extern int func_ov003_02149abc(uint32_t);
extern int func_ov003_02149860(uint32_t);

typedef struct Obj {
    uint32_t w[3];
    uint32_t flags;
    uint8_t pad[0x80 - 0x10];
    uint32_t child;
} Obj;

void func_ov003_0216e410(Obj *a)
{
    if (func_ov003_02149abc(func_020424e0(a->child)) == 0) {
        return;
    }
    if (func_ov003_02149860(func_020424e0(a->child)) == 0) {
        return;
    }
    a->flags = (a->flags & ~0xffu) | 2;
}
