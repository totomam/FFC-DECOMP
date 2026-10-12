#include "ffc/types.h"

typedef struct Obj Obj;
struct Obj {
    void **vt;
    uint8_t pad0[0x7c];
    uint32_t f80;
    uint32_t f84;
    uint32_t *f88;
    uint8_t pad1[0x10];
    uint32_t f9c;
    uint32_t fa0;
};

typedef struct { uint32_t a, b; } Pair;
typedef struct { uint32_t pad; Pair p; uint32_t st; Pair arr[6]; } Local;

extern void *func_0206975c(void);
extern void func_02069848(Obj *obj, uint32_t v);
extern void func_02069dcc(Obj *obj, void *p);
extern uintptr_t func_02069734(const void *object);
extern uint32_t func_020698fc(Obj *obj, uint32_t a, uint32_t b);
extern void func_020697ac(Obj *obj, uint32_t v);
extern uint32_t func_02069bac(Obj *obj, uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_02069978(Obj *obj, uint32_t a, uint32_t b);
extern uint32_t data_020b1b60[2];

void func_0206a334(Obj *obj) {
    Local L;
    Obj *self = obj;
    uint32_t one = 1;
    if (!(self->f88[1] & one)) {
        void *r4 = func_0206975c();
        if (r4 != 0) {
            func_02069848(self, 0);
            ((void (*)(Pair *, void *))(*(void ***)r4)[5])(&L.arr[3], r4);
            self->f9c = L.arr[3].a;
            self->fa0 = L.arr[3].b;
            func_02069dcc(self, r4);
            if (func_02069734(self) == 0) {
                uint32_t res = func_020698fc(self, self->f9c, self->fa0);
                func_020697ac(self, res);
            }
        }
        self->f80 = data_020b1b60[0];
        self->f84 = data_020b1b60[1];
        return;
    } else {
        uint32_t a = self->f88[1];
        uint32_t b = self->f88[2];
        uintptr_t r2 = func_02069734(self);
        uint32_t state = 0;
        uint32_t r4;
        if (a & (a ^ b) & 0x10) state = one;
        if (a & (a ^ b) & 0x20) state = 3;
        if (a & (a ^ b) & 0x40) state = 4;
        if (a & (a ^ b) & 0x80) state = 2;
        if (state == 0) {
            ((void (*)(Obj *))self->vt[5])(self);
            return;
        }
        if (r2 == 0) {
            L.p.a = self->f9c;
            L.p.b = self->fa0;
            L.st = state;
            L.arr[0] = L.p;
            L.arr[1] = L.p;
            L.arr[2] = L.p;
            L.arr[4] = L.p;
            L.arr[5] = L.p;
            r4 = func_02069bac(self, L.p.a, L.p.b, L.p.a);
            if (r4 == 0) {
                uint32_t res = func_020698fc(self, self->f9c, self->fa0);
                func_020697ac(self, res);
            }
        } else {
            r4 = func_02069978(self, (uint32_t)r2, state);
        }
        if (r4 != 0) {
            func_020697ac(self, r4);
            func_02069848(self, r4);
        }
        return;
    }
}
