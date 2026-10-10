#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
typedef struct {
    uint32_t *vt;
    uint8_t pad[0x7c];
    P pr;
    uint8_t pad2[0x08];
    uint32_t v;
} O;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_020b0008[];
extern P data_020b0048;

O *func_020499fc(O *o, uint32_t v) {
    func_02056c9c(o, 0);
    o->vt = data_020b0008;
    o->v = v;
    o->pr = data_020b0048;
    return o;
}
