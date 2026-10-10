#include "ffc/types.h"

extern void func_02056858(uint32_t);
extern uint32_t data_020b370c;

typedef struct Obj {
    uint32_t vt;
    uint8_t pad0[0x20 - 4];
    uint32_t f20;
    uint8_t pad1[0x39 - 0x24];
    uint8_t f39;
} Obj;

Obj *func_02098930(Obj *p) {
    p->vt = (uint32_t)&data_020b370c;
    if (p->f39) {
        func_02056858(p->f20);
    }
    return p;
}
