#include "ffc/types.h"

extern void func_02021338(uint32_t arg);
extern void func_02056db0(void *obj);
extern uint8_t data_ov002_021d4cb0;

void *func_ov002_0219f7bc(void *self)
{
    uint8_t *p = (uint8_t *)self;
    *(void **)p = &data_ov002_021d4cb0;
    if (p[0x84] == 0) {
        func_02021338(0x40);
    }
    func_02056db0(p);
    return p;
}
