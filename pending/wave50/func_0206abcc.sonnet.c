#include "ffc/types.h"

typedef struct Obj {
    void *vt0;
    uint32_t pad04[4];
    void *vt14;
    uint32_t pad18[2];
    void *f20;
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
    uint32_t f38;
    uint8_t f3c;
} Obj;

extern void *func_020548b4(void *object, uint32_t first, uint32_t second);
extern uint32_t func_020534f8(uint32_t x);
extern uint32_t func_02053524(void);
extern uint32_t func_02056830(uint32_t x);
extern void *func_0205681c(uint32_t size);
extern void *func_0206abac(void *a, void *b);
extern void func_02054114(uint32_t x);
extern void func_02054714(void *p);
extern uint32_t data_020b1c14;
extern uint32_t data_020b1c28;

void *func_0206abcc(Obj *self, uint32_t first, uint32_t second, uint32_t third)
{
    void *r;
    uint32_t t;

    func_020548b4(self, 0, 0);
    self->vt0 = &data_020b1c14;
    self->vt14 = &data_020b1c28;
    self->f28 = 0;
    self->f3c = 0;
    self->f24 = first;
    self->f2c = second;
    self->f30 = third;
    if (first != 0xffffffff) {
        func_020534f8(first);
    } else {
        self->f24 = func_02053524();
    }
    t = third * 0xc1;
    self->f34 = func_02056830(t);
    self->f38 = func_02056830(t);
    r = func_0205681c(0x18);
    if (r != 0) {
        r = func_0206abac(r, self);
    }
    func_02054114(0);
    self->f20 = r;
    func_02054714(&self->vt14);
    return self;
}
