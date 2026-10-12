#include "ffc/types.h"

typedef struct Box {
    int32_t a;
    int32_t b;
    int32_t c;
    int32_t d;
} Box;

extern void func_020537cc(void *self, Box box);
extern void *func_020487a0(void *container, void *position, uint8_t flag);

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vt;
    Box box;
} Obj;

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
    Obj **end;

    func_020537cc(&self->sub, box);
    end = self->items + self->count;
    it = self->items;
    while (it != end) {
        Obj *o = *it;
        Box t = o->box;
        Box u = t;
        if (box.a <= u.a && box.b <= u.b && u.c <= box.c && u.d <= box.d) {
            if (o != 0) {
                o->vt[1](o);
            }
            {
                uint8_t flag = 0;
                it = (Obj **)func_020487a0(&self->items, it, flag);
            }
        } else {
            it++;
        }
        end = self->items + self->count;
    }
}
