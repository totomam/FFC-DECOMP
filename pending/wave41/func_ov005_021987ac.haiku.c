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
    uint32_t *self = (uint32_t *)self_;
    uint16_t i;

    func_02069694(self_, (void *)self[0x4b], 4);
    for (i = 0; i < self[0x46]; i++) {
        func_02069600(self_, ((Obj **)self[0x45])[i]);
        {
            Obj *o = ((Obj **)self[0x45])[i];
            if (o) {
                o->vt->f1(o);
            }
            ((Obj **)self[0x45])[i] = 0;
        }
    }
    {
        int n = self[0x46];
        self[0x46] = diff(n, n);
    }
}
