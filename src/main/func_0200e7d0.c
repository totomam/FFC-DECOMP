#include "ffc/types.h"
extern void func_02035f58(void *p);
extern uint8_t data_020ab378[];
typedef struct { void *vt; uint32_t a; uint32_t b; uint32_t c; } S;
S *func_0200e7d0(S *p) {
    p->b = 0;
    p->c = 0x100d1;
    p->vt = data_020ab378;
    func_02035f58((uint8_t *)p + 0x1c);
    return p;
}
