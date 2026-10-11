#include "ffc/types.h"

typedef struct Inner {
    void (**vt)(struct Inner *);
} Inner;

typedef struct Obj {
    void *vt;
    uint8_t pad[0x7c];
    void *a80;
    Inner *b84;
} Obj;

extern void func_02061344(void *);
extern void func_02056db0(void *);
extern void func_02056844(void *);
extern char data_ov005_02199068[];

Obj *func_ov005_02197100(Obj *self)
{
    Inner *p;
    self->vt = data_ov005_02199068;
    func_02061344(self->a80);
    p = self->b84;
    if (p != 0) {
        if (p) {
            p->vt[1](p);
        }
        self->b84 = 0;
    }
    func_02056db0(self);
    func_02056844(self);
    return self;
}
