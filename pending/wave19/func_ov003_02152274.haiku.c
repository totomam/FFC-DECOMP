#include "ffc/types.h"

extern void func_02056c4c(uint32_t arg);
extern void func_02056db0(void *obj);
extern uint32_t data_ov003_02179e64;
extern uint32_t data_ov003_02179e84;

void *func_ov003_02152274(void *p)
{
    uint32_t *obj = (uint32_t *)p;
    obj[0] = (uint32_t)&data_ov003_02179e64;
    *(uint32_t *)((uint8_t *)p + 0x80) = (uint32_t)&data_ov003_02179e84;
    func_02056c4c(*(uint32_t *)((uint8_t *)p + 0xa0));
    func_02056db0(p);
    return p;
}
