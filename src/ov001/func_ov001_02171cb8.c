#include "ffc/types.h"

typedef struct Obj {
    uint32_t *f00;
    uint8_t *f04;
    int32_t f08;
    int32_t f0c;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
    uint32_t f1c;
    uint32_t f20;
} Obj;

extern int func_ov001_021719e0(Obj *p, uint32_t v);

int func_ov001_02171cb8(Obj *p, uint8_t c)
{
    if (p == 0) {
        return 0;
    }
    if (p->f20 != 0) {
        return 0;
    }
    if (p->f0c + 1 >= p->f08) {
        if (p->f18 != 0) {
            *(uint32_t *)((uint8_t *)p->f00 + 0x124) = 1;
            p->f00[0x40 / 4] = 2;
            return 0;
        }
        if (func_ov001_021719e0(p, p->f14) == 0) {
            *(uint32_t *)((uint8_t *)p->f00 + 0x124) = 1;
            p->f00[0x40 / 4] = 1;
            return 0;
        }
    }
    p->f04[p->f0c] = c;
    p->f0c = p->f0c + 1;
    p->f04[p->f0c] = 0;
    return 1;
}
