#include "ffc/types.h"

extern uint8_t data_ov002_021d4cb0[];
extern void func_02021338(uint32_t x);
extern void func_02056db0(void *p);
extern void func_02056844(void *p);

void *func_ov002_0219f654(void *p)
{
    uint8_t *obj = (uint8_t *)p;
    *(uint8_t **)obj = data_ov002_021d4cb0;
    if (obj[0x84] == 0) {
        func_02021338(0x40);
    }
    func_02056db0(obj);
    func_02056844(obj);
    return obj;
}
