#include "ffc/types.h"

extern uint32_t func_ov001_02175b64(uint32_t x, uint32_t y, void *z);
extern void func_ov000_02159f34(void);
extern uint32_t data_ov000_0217004c[];
extern uint32_t data_ov000_0216af84;

uint32_t func_ov000_02159ea4(uint32_t a)
{
    uint32_t *p = (uint32_t *)data_ov000_0217004c[3];
    uint32_t r;
    r = func_ov001_02175b64(p[1], a, &data_ov000_0216af84);
    func_ov000_02159f34();
    return r;
}
