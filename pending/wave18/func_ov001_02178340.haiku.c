#include "ffc/types.h"

extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern void func_ov001_02178324(void *a, uint32_t b, void *c);
extern uint32_t data_ov001_021905b4;

void func_ov001_02178340(void *a, uint32_t b)
{
    uint32_t buf[4];
    func_02086ad4(buf, (uint32_t)&data_ov001_021905b4);
    func_ov001_02178324(a, b, buf);
}
