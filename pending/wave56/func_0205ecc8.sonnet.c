#include "ffc/types.h"

typedef struct Box { int32_t a, b, c, d; } Box;
typedef struct Flag { uint8_t f; } Flag;

extern void func_020537cc(void *self, Box box);
extern void *func_020487a0(void *container, void *position, Flag flag);

typedef struct Obj { void **vt; Box box; } Obj;

typedef struct Owner {
    uint8_t pad0[0x44];
    Obj **items;
    int32_t count;
    uint8_t pad1[0x68 - 0x4c];
    uint8_t sub;
} Owner;

void func_0205ecc8(Owner *self, Box box)
{
    Obj **it;
    func_020537cc(&self->sub, box);
    for (it = self->items; it != self->items + self->count; ) {
        Box u = (*it)->box;
        if (box.a <= u.a && box.b <= u.b && u.c <= box.c && u.d <= box.d) {
            Obj *o = *it;
            void *cont = &self->items;
            Flag fl;
            if (o) ((void (*)(void *))o->vt[1])(o);
            fl.f = 0;
            it = (Obj **)func_020487a0(cont, it, fl);
        } else {
            it++;
        }
    }
}
