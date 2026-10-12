#include "ffc/types.h"

extern void func_02056c9c(void *self, uint32_t arg);
extern uint8_t data_020b1abc[];
extern uint32_t data_020b1b18[];

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t *c;
} List;

typedef struct {
    void *vt;
    uint8_t pad0[0x80 - 4];
    uint32_t f80;
    uint32_t f84;
    uint32_t f88;
    uint32_t f8c;
    uint8_t pad1[0x98 - 0x90];
    uint8_t f98;
    uint8_t pad2[0x9c - 0x99];
    uint32_t f9c;
    uint32_t fa0;
    List list;
    uint8_t pad3[0xb1 - 0xb0];
    uint8_t fb1;
    uint8_t fb2;
    uint8_t fb3;
    uint8_t fb4;
} Obj;

void func_02069434(Obj *self, uint32_t a) {
    List *l;
    uint32_t x;
    uint32_t y;
    uint32_t *q;
    func_02056c9c(self, 0);
    self->vt = data_020b1abc;
    self->f88 = 0;
    self->f8c = a;
    l = &self->list;
    self->f98 = 1;
    self->f9c = 0;
    self->fa0 = 0;
    self->list.a = 0;
    l->c = &l->b;
    self->fb1 = 0;
    self->fb2 = 0;
    self->fb3 = 1;
    self->fb4 = 1;
    l->b = 0;
    q = data_020b1b18;
    x = q[0];
    y = q[1];
    self->f80 = x;
    self->f84 = y;
}
