#include "ffc/types.h"

typedef struct { uint32_t a; uint32_t b; } S;
typedef struct Obj { void **vt; } Obj;
typedef struct Self {
    void **vt;
    uint8_t pad0[0x8c - 4];
    uint32_t count;
    uint32_t pad1;
    uint32_t h;
    uint32_t pad2;
    int8_t cur[0xc];
    void *list;
    uint32_t pad3;
    Obj *slots[8];
    void *font;
} Self;

extern void func_02056bf4(void *obj);
extern uint32_t func_02091b10(void *object, uint32_t first, ...);
extern void *func_0203b95c(void *a, void *b, uint32_t c, uint32_t d);
extern void func_02056bc0(void *object, void *node);
extern void func_02021338(uint32_t x);
extern char data_ov003_0217a608[];

void func_ov003_02163c44(Self *self) {
    int8_t buf[8];
    S args;
    char tmp[0x44];
    int changed = 0;
    uint32_t i;

    ((void (*)(Self *, void *))self->vt[4])(self, buf);

    for (i = 0; i < self->count; i++) {
        if (buf[i] != self->cur[i]) {
            Obj *o;
            changed = 1;
            self->cur[i] = buf[i];
            if (self->slots[i] != 0) {
                func_02056bf4(self->list);
                o = self->slots[i];
                if (o != 0) {
                    if (o) ((void (*)(Obj *))o->vt[1])(o);
                    self->slots[i] = 0;
                }
            }
            if (self->cur[i] == 0x20) {
                self->slots[i] = 0;
            } else {
                func_02091b10(tmp + 1, (uint32_t)data_ov003_0217a608, self->cur[i] - 0x30);
                self->slots[i] = func_0203b95c(tmp + 1, self->font, 0, 1);
                args.a = i * 8 + 0xd;
                args.b = 0x10;
                o = self->slots[i];
                ((void (*)(Obj *, S))o->vt[3])(o, args);
                o = self->slots[i];
                ((void (*)(Obj *))o->vt[10])(o);
                o = self->slots[i];
                ((void (*)(Obj *, uint32_t, uint32_t))o->vt[14])(o, 2, 0);
                func_02056bc0(self->list, self->slots[i]);
            }
        }
    }

    if (changed) {
        if (self->h != 0xFFFFFFFFu) func_02021338(self->h);
    }
}
