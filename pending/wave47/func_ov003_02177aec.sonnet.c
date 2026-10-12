#include "ffc/types.h"

extern void func_02056bf4(void *p);
extern void func_02056bc0(void *object, void *node);
extern void *func_0203bc04(void *a, int b, int c, int d);

typedef struct O { void **vt; } O;
typedef struct E { uint32_t id; void *res; } E;
typedef struct S {
    uint8_t pad0[0x48];
    uint8_t sub[0x54];
    O *obj;
    uint32_t pad9;
    uint32_t cur;
    uint8_t pad1[0x20];
    uint8_t flag;
    uint8_t pad2[0x27];
    uint32_t count;
    E ent[1];
} S;

void func_ov003_02177aec(S *self, uint32_t v) {
    O *o;
    uint32_t i;
    if (v != self->cur) {
        self->cur = v;
        if (self->obj != 0) {
            func_02056bf4(self->sub);
            o = self->obj;
            if (o != 0) {
                if (o != 0) {
                    ((void (*)(O *))o->vt[1])(o);
                }
                self->obj = 0;
            }
        }
    }
    if (self->obj == 0) {
        for (i = 0; i < self->count; i++) {
            if (self->cur == self->ent[i].id) {
                self->obj = o = (O *)func_0203bc04(self->ent[i].res, 1, 0, 0);
                ((void (*)(O *, uint32_t))o->vt[8])(o, 0);
                o = self->obj;
                ((void (*)(O *))o->vt[10])(o);
                if (self->flag != 0) {
                    o = self->obj;
                    ((void (*)(O *, uint32_t, uint32_t))o->vt[14])(o, 0x104, 0x84);
                } else {
                    o = self->obj;
                    ((void (*)(O *, uint32_t, uint32_t))o->vt[14])(o, 4, 0x84);
                }
                func_02056bc0(self->sub, self->obj);
                return;
            }
        }
    }
}
