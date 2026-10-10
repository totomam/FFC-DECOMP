#include "ffc/types.h"

extern uint32_t data_020ae3ec[];

typedef struct {
    void *vt;
    uint32_t pad4;
    uint32_t f8;
    uint32_t fc;
} S;

void func_02034fa0(S *p, uint32_t a, uint32_t b) {
    void *v = data_020ae3ec;
    p->vt = v;
    p->f8 = a;
    p->fc = b;
}
