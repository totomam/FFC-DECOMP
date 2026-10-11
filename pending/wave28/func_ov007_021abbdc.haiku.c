#include "ffc/types.h"

extern uint32_t data_ov007_021c4fd0;
extern void func_0205d620(uint32_t p);
extern void func_02056844(uint32_t p);
extern void func_02056db0(uint32_t p);

uint32_t func_ov007_021abbdc(uint32_t *self)
{
    int i;
    self[0] = (uint32_t)&data_ov007_021c4fd0;
    for (i = 0; i < 3; i++) {
        uint32_t p = self[54 + i];
        if (p != 0) {
            if (p != 0) {
                func_0205d620(p);
                func_02056844(p);
            }
            self[54 + i] = 0;
        }
    }
    func_02056db0((uint32_t)self);
    return (uint32_t)self;
}
