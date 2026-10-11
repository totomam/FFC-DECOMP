#include "ffc/types.h"

extern int func_02056c4c(void *p);

typedef struct O { struct VT { uint32_t pad[8]; void (*f20)(struct O *, int); uint32_t pad2[5]; void (*f38)(struct O *, int, int); } *vt; } O;
typedef struct S { uint8_t pad[0x14]; uint8_t sub[0x80]; O *o; uint8_t b; } S;

void func_ov009_0219a2c0(S *self, int flag) {
    int n;
    if (flag) {
        n = self->b + 3;
        self->o->vt->f38(self->o, n, 0);
    } else {
        n = self->b + 1;
        self->o->vt->f38(self->o, n, 0);
    }
    self->o->vt->f20(self->o, 2);
    func_02056c4c(self->sub);
}
