#include "ffc/types.h"

extern void *data_020b93b8;
extern uint32_t func_0201c9ac(void *obj, uint32_t n);
extern uint32_t func_02086ad4(void *object, uint32_t first, ...);
extern uint8_t data_ov003_0217a630[];

uint32_t func_ov003_02163f98(uint32_t unused, void *p)
{
    uint32_t r = func_0201c9ac(data_020b93b8, 3);
    return func_02086ad4(p, (uint32_t)data_ov003_0217a630, r);
}
