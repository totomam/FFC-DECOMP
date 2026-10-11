#include "ffc/types.h"

extern void func_02056bf4(void *p);

typedef struct Iface Iface;
typedef struct VT {
    void *s0;
    void (*s1)(Iface *self);
} VT;
struct Iface {
    const VT *vt;
};

void func_ov003_0214dde8(uint8_t *p)
{
    if (*(Iface **)(p + 0x414) != 0) {
        Iface *x;
        func_02056bf4(p + 0x48);
        x = *(Iface **)(p + 0x414);
        if (x != 0) {
            if (x) {
                x->vt->s1(x);
            }
            *(Iface **)(p + 0x414) = 0;
        }
    }
}
