#include "ffc/types.h"
extern void func_0207c914(void *a, int b, int c);
typedef struct S { uint8_t pad[0x1c]; uint8_t q[0x10]; uint8_t st; } S;
typedef struct O { S * volatile s; } O;
void func_02079a9c(O *o, int v, int w) {
    if (o->s != 0) {
        S *t = o->s;
        if (t->st != 2) {
            func_0207c914(t->q, v << 8, w);
        }
    }
}
