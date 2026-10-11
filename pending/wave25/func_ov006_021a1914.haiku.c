#include "ffc/types.h"

extern uint32_t func_ov006_021a1530(void);
extern void func_ov006_021a06f4(void);
extern void func_ov006_021a3530(void);
extern uint8_t data_ov006_021bb170[];
extern uint8_t data_ov006_021b8bc4[];

void func_ov006_021a1914(void)
{
    uint32_t r4 = func_ov006_021a1530();
    *(uint32_t *)(data_ov006_021bb170 + 0x78) = r4;
    func_ov006_021a06f4();
    *(uint32_t *)(data_ov006_021bb170 + 0x38) = (r4 == 1) ? 6 : 7;
    *(uint32_t *)(data_ov006_021b8bc4 + 0xc) = 0xFFFFFFFFu;
    func_ov006_021a3530();
}
