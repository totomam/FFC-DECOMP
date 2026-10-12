/* cflags: -lang c++ */
#include "ffc/types.h"

struct Num {
    int v;
    Num(int x) : v(x) {}
    ~Num() {}
};
inline int diff(const Num &a, int b) { return a.v - b; }

struct Obj;
struct ObjVt {
    void (*f0)(Obj *);
    void (*f1)(Obj *);
};
struct Obj {
    ObjVt *vt;
};

extern "C" {
void func_02069694(void *self, void *p, uint32_t n);
void func_02069600(void *self, Obj *obj);
}

extern "C" void func_ov005_021987ac(void *self_) {
    uint8_t *s = (uint8_t *)self_;
    int od = 0x114;
    int oc = 0x118;
    int oa = 0x114;
    int oe = 0x114;
    uint16_t i;

    func_02069694(self_, *(void **)(s + 0x12c), 4);
    for (i = 0; i < *(uint32_t *)(s + oc); i++) {
        func_02069600(self_, (*(Obj ***)(s + od))[i]);
        Obj *o = (*(Obj ***)(s + oe))[i];
        if (o) {
            if (o) o->vt->f1(o);
            (*(Obj ***)(s + oa))[i] = 0;
        }
    }
    {
        int of = 0x118;
        int c = *(int *)(s + of);
        *(int *)(s + of) = diff(c, c);
    }
}
