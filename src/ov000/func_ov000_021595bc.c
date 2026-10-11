#include "ffc/types.h"

typedef struct Obj {
    uint8_t pad[0x44];
    uint32_t f44;
    uint32_t f48;
} Obj;

typedef struct G {
    uint8_t pad[0xc];
    Obj *p;
} G;

extern G data_ov000_0217004c;

int func_ov000_021595bc(uint32_t a, uint32_t b)
{
    Obj *p = data_ov000_0217004c.p;
    if (p == 0) {
        return 0;
    }
    p->f44 = a;
    data_ov000_0217004c.p->f48 = b;
    return 1;
}
