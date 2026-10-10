#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
typedef struct {
    uint32_t *vt;
    uint8_t pad[0x7c];
    P pr;
    uint32_t v;
} O;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_ov002_021d57e0[];
extern P data_ov002_021d586c;

O *func_ov002_021b1bf0(O *o, uint32_t b) {
    func_02056c9c(o, 0);
    o->vt = data_ov002_021d57e0;
    o->v = b;
    o->pr = data_ov002_021d586c;
    return o;
}
