#include "ffc/types.h"

extern uint8_t data_020b0334;
extern void func_02060bac(void *p);
extern void func_02056844(void *p);
extern void func_0200d5ec(void *p);

void *func_0204e770(uint8_t *p)
{
    void *r5;

    *(void **)p = &data_020b0334;
    r5 = *(void **)(p + 0x1c);
    if (r5 != 0) {
        func_02060bac(r5);
        func_02056844(r5);
    }
    func_02056844(*(void **)(p + 0x20));
    func_02056844(*(void **)(p + 0x24));
    func_0200d5ec(p + 0xa8);
    func_02056844(p);
    return p;
}
