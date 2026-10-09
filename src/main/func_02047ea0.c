#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
typedef struct {
    uint32_t *vt;
    uint8_t pad[0x7c];
    uint32_t v;
    P pr;
} O;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_020af9b4[];
extern P data_020afcb0;

O *func_02047ea0(O *o, uint32_t b) {
    func_02056c9c(o, 0);
    o->vt = data_020af9b4;
    o->v = b;
    o->pr = data_020afcb0;
    return o;
}
