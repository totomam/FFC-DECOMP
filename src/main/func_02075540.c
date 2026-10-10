#include "ffc/types.h"

typedef struct { uint32_t a, b; } P;
typedef struct {
    uint32_t *vt;
    uint8_t pad[0x7c];
    uint32_t v;
    P pr;
} O;

extern void func_02056c9c(void *p, uint32_t x);
extern uint32_t data_020b25c8[];
extern P data_020b26e0;

O *func_02075540(O *o, uint32_t b) {
    func_02056c9c(o, 0);
    o->vt = data_020b25c8;
    o->v = b;
    o->pr = data_020b26e0;
    return o;
}
