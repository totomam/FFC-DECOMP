#include "ffc/types.h"

extern void func_02057be4(void *p, uint32_t a1, uint32_t size, uint32_t align);
extern uint32_t data_0209f388[];
extern uint32_t data_020b0d28[];

uint32_t *func_0205833c(uint32_t *p, uint32_t a1, uint32_t flag)
{
    uint32_t idx = (flag != 0) ? 1 : 0;
    func_02057be4(p, a1, data_0209f388[idx] << 4, 0x24);
    p[16] = flag;
    p[0] = (uint32_t)data_020b0d28;
    p[15] = 0;
    idx = (flag != 0) ? 1 : 0;
    p[17] = idx;
    p[18] = data_0209f388[idx];
    return p;
}
