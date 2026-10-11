#include "ffc/types.h"
typedef struct { uint32_t pad0[14]; uint32_t f38; uint32_t pad1[28]; uint32_t f78; } S;
extern uint32_t func_ov006_021a1530(void);
extern void func_ov006_021a06f4(void);
extern void func_ov006_021a3530(void);
extern S data_ov006_021bb170;
extern uint32_t data_ov006_021b8bc4[];
void func_ov006_021a1914(void)
{
    uint32_t r4 = func_ov006_021a1530();
    data_ov006_021bb170.f78 = r4;
    func_ov006_021a06f4();
    if (r4 == 1) { data_ov006_021bb170.f38 = 6; } else { data_ov006_021bb170.f38 = 7; }
    data_ov006_021b8bc4[3] = -1;
    func_ov006_021a3530();
}
