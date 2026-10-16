#include "ffc/types.h"
extern void func_02034fa0(void *p);
extern char data_020ae3d8[];
typedef struct { void *vt; uint32_t a,b,x,c,d,e; uint8_t f; } S;
S *func_02035298(S *p, int a, int b, uint32_t d) {
    func_02034fa0(p);
    p->vt = data_020ae3d8;
    p->d = d;
    p->c = 0;
    p->e = 0;
    p->f = 0;
    return p;
}
