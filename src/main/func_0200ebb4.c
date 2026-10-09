#include "ffc/types.h"
extern void func_ov002_021c8e44(void *p);
extern uint8_t data_020ab858[];
typedef struct { void *vt; uint32_t a; uint32_t b; uint32_t c; } S;
S *func_0200ebb4(S *p) {
    p->b = 0;
    p->c = 0x10101;
    p->vt = data_020ab858;
    func_ov002_021c8e44((uint8_t *)p + 0x10);
    return p;
}
