#include "ffc/types.h"
extern void func_02035f58(void *p);
extern uint8_t data_020ab3b8[];
typedef struct { void *vt; uint32_t a; uint32_t b; uint32_t c; } S;
S *func_0200e80c(S *p) {
    p->b = 0;
    p->c = 0x100fa;
    p->vt = data_020ab3b8;
    func_02035f58((uint8_t *)p + 0x20);
    return p;
}
