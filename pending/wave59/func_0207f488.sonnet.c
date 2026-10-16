#include "ffc/types.h"
typedef struct V { uint32_t pad[8]; void (*fn)(void*, uint32_t); } V;
typedef struct O { uint8_t pad[0x20]; V *vt; } O;
typedef struct P { uint8_t pad0[8]; O *o; uint8_t pad1[0x20]; uint32_t a; uint32_t c; uint32_t pad2; uint32_t b; } P;
void func_0207f488(P *p) {
    O *o = p->o;
    p->a += p->b;
    o->vt->fn(o, p->c);
}
