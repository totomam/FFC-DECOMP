#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov001_021807e8(uint32_t v);

void func_ov000_02160f20(void)
{
    uint8_t *p = func_ov000_02163350();
    p[0x629] = 1;
    p = func_ov000_02163350();
    func_ov001_021807e8(*(uint32_t *)(*(uint32_t *)(p + 4)));
    p = func_ov000_02163350();
    p[0x629] = 0;
}
