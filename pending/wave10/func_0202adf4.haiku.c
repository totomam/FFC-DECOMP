#include "ffc/types.h"

typedef struct VT { void *s0; void (*s1)(void *); } VT;
typedef struct Base { const VT *vt; } Base;
typedef struct Obj {
    const void *vt;
    uint8_t pad[0x30 - 4];
    void *f30;
    Base *f34;
    uint8_t pad2[0x164 - 0x38];
} Obj;

extern char data_020ad9c4[];
extern void func_02022eb8(void *p);
extern void func_0202b18c(void *p);
extern void func_0202d0e0(void *p);
extern void func_0209d02c(void *p, int a, int b, void (*fn)(void));
extern void func_0202ade8(void);

void *func_0202adf4(Obj *self) {
    self->vt = data_020ad9c4;
    if (self->f34 != 0) {
        func_02022eb8(self->f30);
        if (self->f34 != 0) {
            self->f34->vt->s1(self->f34);
        }
        self->f34 = 0;
    }
    func_0202b18c(self);
    func_0202d0e0((uint8_t *)self + 0x164);
    func_0209d02c((uint8_t *)self + 0xbc, 0xe, 0xc, func_0202ade8);
    return self;
}
