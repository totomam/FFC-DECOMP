#include "ffc/types.h"

extern uint32_t func_0205db04(const void *object);
extern void func_0205847c(void *a, void *b);
extern void func_0205fd04(void *a, void *b);
extern void func_0205d620(void *a);
extern void func_02056844(void *a);
extern char data_020a7dc0[];

typedef struct Q {
    void *pad0;
    void *pad4;
    void *f8;
    void *fc;
    void *f10;
} Q;

typedef struct P {
    void *pad0;
    void *pad4;
    void *pad8;
    void *pad0c;
    void *pad10;
    void *pad14;
    Q *f18;
} P;

typedef struct Obj {
    void *vtbl;
    P *p4;
    void *a8;
    void *b0c;
    void *c10;
} Obj;

Obj *func_020051a4(Obj *self) {
    void *v;
    void *a;

    self->vtbl = data_020a7dc0;
    if (self->c10 != 0 && self->a8 != 0) {
        if (func_0205db04(self->a8) != 0) {
            if (self->p4->f18->f10 != 0) {
                v = self->p4->f18->f10;
            } else {
                v = self->p4->f18->fc;
            }
        } else {
            v = self->p4->f18->fc;
        }
        func_0205847c(v, self->c10);
    }
    if (self->b0c != 0) {
        func_0205fd04(self->p4->f18->f8, self->b0c);
    }
    a = self->a8;
    if (a != 0) {
        func_0205d620(a);
        func_02056844(a);
        self->a8 = 0;
    }
    return self;
}
