#include "ffc/types.h"

extern void func_02056bf4(void *obj);
extern void func_02056c4c(void *obj);
extern void func_02056bc0(void *object, void *node);

typedef struct VTab {
    void *slot0;
    void (*slot1)(void *self);
} VTab;

typedef struct Obj {
    uint8_t pad0[0xc4];
    void *c4;
    void *c8;
    void *cc;
    uint8_t pad1[0x14];
    void *e4;
    void *e8;
    uint32_t ec;
} Obj;

void func_ov002_0219f310(Obj *self, void *a, void *b, uint32_t c)
{
    void *tmp;

    if (self->e4 != 0) {
        func_02056bf4(self->cc);
        func_02056c4c(self->c8);
        tmp = self->e4;
        if (tmp != 0) {
            (*(VTab **)tmp)->slot1(tmp);
            self->e4 = 0;
        }
    }
    self->e4 = a;
    func_02056bc0(self->cc, a);

    if (self->e8 != 0) {
        func_02056bf4(self->cc);
        func_02056c4c(self->c4);
        tmp = self->e8;
        if (tmp != 0) {
            (*(VTab **)tmp)->slot1(tmp);
            self->e8 = 0;
        }
    }
    self->e8 = b;
    if (b != 0) {
        func_02056bc0(self->cc, b);
        self->ec = c;
    }
}
