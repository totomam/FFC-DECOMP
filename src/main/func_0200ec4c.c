#include "ffc/types.h"
extern void func_ov002_021c8e44(void *p);
extern uint8_t data_020ab8d8[];
typedef struct { void *vt; uint32_t a; uint32_t b; uint32_t c; } S;
S *func_0200ec4c(S *p) {
    p->b = 0;
    p->c = 0x1011b;
    p->vt = data_020ab8d8;
    func_ov002_021c8e44((uint8_t *)p + 0x14);
    return p;
}
