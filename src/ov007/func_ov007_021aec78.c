#include "ffc/types.h"

extern int func_ov000_02157f38(void);

typedef struct Obj {
    uint32_t w0;
    uint32_t w1;
    uint32_t w2;
    uint32_t flags;
    uint8_t pad[0x80 - 0x10];
    uint32_t *ptr;
} Obj;

void func_ov007_021aec78(Obj *p)
{
    switch (func_ov000_02157f38()) {
    case 0:
        p->flags = (p->flags & ~0xffu) | 2;
        return;
    case 2:
        p->flags = (p->flags & ~0xffu) | 2;
        return;
    case 3:
        *p->ptr = 0xffffffffu;
        p->flags = (p->flags & ~0xffu) | 2;
        return;
    case 1:
    default:
        return;
    }
}
