#include "ffc/types.h"

extern void func_02022eb8(void *p);
extern void func_0202ae9c(void *p);
extern uint32_t data_020ad9e8[];

typedef struct Obj {
    void (**vt)(struct Obj *);
} Obj;

typedef struct Self {
    uint32_t vtbl;
    uint8_t pad0[0x30 - 4];
    void *f30;
    uint8_t pad1[0x5d4 - 0x34];
    Obj *arr[45];
} Self;

void *func_0202cbec(Self *self) {
    int i;
    *(uint32_t *)self = (uint32_t)data_020ad9e8;
    for (i = 0; i < 45; i++) {
        if (self->arr[i] != 0) {
            func_02022eb8(self->f30);
            if (self->arr[i] != 0) {
                Obj *p = self->arr[i];
                if (p) p->vt[1](p);
                self->arr[i] = 0;
            }
        }
    }
    func_0202ae9c(self);
    return self;
}
