#include "ffc/types.h"

typedef struct Obj {
    uint32_t pad[0x34 / 4];
    uint32_t f34;
    uint32_t f38;
} Obj;

typedef struct Glob {
    uint32_t pad[3];
    Obj *p;
} Glob;

extern Glob data_ov000_0217004c;

uint32_t func_ov000_021595d8(uint32_t r0, uint32_t r1)
{
    Obj *p = data_ov000_0217004c.p;
    if (p == 0) {
        return 0;
    }
    p->f34 = r0;
    if (r1 != 0) {
        data_ov000_0217004c.p->f38 = r1;
    }
    return 1;
}
