#include "ffc/types.h"
extern void func_02035f58(void *p);
extern uint8_t data_020ab758[];
typedef struct { void *vt; uint32_t a; uint32_t b; uint32_t c; } S;
S *func_0200ead0(S *p) {
    p->b = 0;
    p->c = 0x1013e;
    p->vt = data_020ab758;
    func_02035f58((uint8_t *)p + 0x24);
    return p;
}
