/* cflags: -lang c++ */
#include "ffc/types.h"

struct Base { virtual void v0(); virtual void v1(); };
struct Obj {
    const void *vt;
    uint8_t pad[0x30 - 4];
    void *f30;
    Base *f34;
    uint8_t pad2[0x164 - 0x38];
};

extern "C" {
extern char data_020ad9c4[];
void func_02022eb8(void *p);
void func_0202b18c(void *p);
void func_0202d0e0(void *p);
void func_0209d02c(void *p, int a, int b, void (*fn)(void));
void func_0202ade8(void);

inline void del(Base *p) { if (p) p->v1(); }
void *func_0202adf4(Obj *self) {
    self->vt = data_020ad9c4;
    Base *q = self->f34;
    if (q != 0) {
        func_02022eb8(self->f30);
        q = self->f34;
        if (q) {
            del(q);
            self->f34 = 0;
        }
    }
    func_0202b18c(self);
    func_0202d0e0((uint8_t *)self + 0x164);
    func_0209d02c((uint8_t *)self + 0xbc, 0xe, 0xc, func_0202ade8);
    return self;
}
}
