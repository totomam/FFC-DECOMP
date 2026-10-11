#include "ffc/types.h"
typedef struct O O;
typedef struct { void *pad[10]; void (*f28)(O *); void (*f2c)(O *); } VT;
struct O { VT *vt; };
typedef struct { uint8_t pad[0xbc]; O *o; } P;
typedef struct { uint32_t c : 30; uint32_t b : 1; uint32_t a : 1; } F;
static inline int chk(F *q) {
    int r;
    if (q->b == 1) r = 1; else r = 0;
    return r;
}
static inline void c28(P *p) { p->o->vt->f28(p->o); }
static inline void c2c(P *p) { p->o->vt->f2c(p->o); }
static inline void call(P *p, int s) {
    switch (s) {
    default: c28(p); break;
    case 0: c2c(p); break;
    }
}
void func_ov005_02196c58(P *p, F *q) {
    call(p, chk(q));
}
