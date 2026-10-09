#include "ffc/types.h"
extern void func_ov002_021c90a0(void *p);
extern uint8_t data_020aca58[];
typedef struct { void *vt; uint32_t a; uint32_t b; uint32_t c; } S;
S *func_0200f9e8(S *p) {
    p->b = 0;
    p->c = 0x100cb;
    p->vt = data_020aca58;
    func_ov002_021c90a0((uint8_t *)p + 0x1c);
    return p;
}
