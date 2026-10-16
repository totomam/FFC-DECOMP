#include "ffc/types.h"
extern void func_0207c914(void *a, int b);
typedef struct { uint8_t pad[0xf0]; uint8_t sub[0x28]; int32_t f0:3; int32_t f:1; } In;
typedef struct { In *p; } S;
void func_0207b8ac(S *self, int x) {
    if (((S volatile*)self)->p == 0) return;
    In *p = self->p;
    if (p->f == 0) func_0207c914(p->sub, x << 8);
}
