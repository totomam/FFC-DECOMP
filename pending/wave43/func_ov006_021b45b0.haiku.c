#include "ffc/types.h"

extern void func_02079470(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3,
                          uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7);

struct Y { uint8_t pad[7]; uint8_t kind; };
struct X { uint8_t pad[8]; struct Y *y; };
struct Obj { struct X *x; };

void func_ov006_021b45b0(uint8_t *p, uint32_t a1, uint32_t a2, uint32_t a3,
                         uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7) {
    volatile uint8_t t[2];
    uint8_t f[2];
    uint8_t *q = f;
    struct Obj *o = *(struct Obj **)(p + 0x1c);
    uint32_t kind;

    q[0] = 0;
    q[1] = 0;
    kind = o->x->y->kind;
    switch (kind) {
    case 0:
    case 7:
        q[0] = 1;
        break;
    case 1:
    case 2:
        q[1] = 1;
        break;
    case 3:
    case 4:
        q[0] = -1;
        break;
    case 5:
    case 6:
        q[1] = -1;
        break;
    }
    t[0] = q[0];
    t[1] = q[1];
    func_02079470(p + 0x18, a1, a2, a3, a4, a5, a6, a7);
}
