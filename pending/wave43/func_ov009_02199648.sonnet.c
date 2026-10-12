#include "ffc/types.h"

typedef struct { uint32_t a, b; } S;
typedef struct VT { void *p[16]; } VT;
typedef struct Obj { VT *vt; } Obj;
typedef struct Self {
    void *vt;
    uint8_t pad[0x44];
    uint8_t list[0x38];
    Obj *slot[5];
} Self;

extern void func_02056c9c(void *object, uint32_t a);
extern void *func_0203b95c(uint32_t a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_02064390(void *object, uint32_t first, uint32_t second);
extern void func_02056bc0(void *object, void *node);
extern uint32_t func_02064aa8(const void *object);
extern void func_0205f2f0(void *object, uint32_t value);
extern char data_ov009_021af82c[];
extern uint32_t data_ov009_021af7c0[];

Self *func_ov009_02199648(Self *self, void *a1, S s)
{
    uint8_t i;
    uint32_t a2 = s.a, a3 = s.b;
    func_02056c9c(self, 0);
    self->vt = data_ov009_021af82c;
    for (i = 0; i < 5; i++) {
        self->slot[i] = (Obj *)func_0203b95c(data_ov009_021af7c0[1], a1, 2, 1);
        ((void (*)(Obj *, uint32_t, uint32_t))self->slot[i]->vt->p[14])(self->slot[i], 1, 0);
        func_02064390(self->slot[i], a2 + ((i - 2) << 3), a3);
        ((void (*)(Obj *, uint32_t))self->slot[i]->vt->p[8])(self->slot[i], 2);
        ((void (*)(Obj *))self->slot[i]->vt->p[10])(self->slot[i]);
        func_02056bc0(self->list, self->slot[i]);
        func_0205f2f0((void *)func_02064aa8(self->slot[i]), 1);
    }
    return self;
}
