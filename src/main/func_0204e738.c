#include "ffc/types.h"

extern uint8_t data_020b0334[];
extern void func_02060bac(void *p);
extern void func_02056844(void *p);
extern void func_0200d5ec(void *p);

void *func_0204e738(void *p) {
    uint8_t *o = (uint8_t *)p;
    *(void **)o = (void *)data_020b0334;
    void *r5 = *(void **)(o + 0x1c);
    if (r5 != 0) {
        func_02060bac(r5);
        func_02056844(r5);
    }
    func_02056844(*(void **)(o + 0x20));
    func_02056844(*(void **)(o + 0x24));
    func_0200d5ec(o + 0xa8);
    return o;
}
