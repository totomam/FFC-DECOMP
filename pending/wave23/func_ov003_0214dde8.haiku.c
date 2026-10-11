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

typedef struct Obj {
    uint8_t pad[0x48];
    uint8_t sub[0x414 - 0x48];
    Iface *ptr;
} Obj;

void func_ov003_0214dde8(Obj *p)
{
    Iface *x;
    x = p->ptr;
    if (x == 0) {
        return;
    }
    func_02056bf4(p->pad + 0x48 - 0x48);
    x = p->ptr;
    if (x == 0) {
        return;
    }
    if (x) {
        x->vt->s1(x);
    }
    p->ptr = 0;
}
