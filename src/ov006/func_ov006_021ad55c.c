#include "ffc/types.h"

extern void func_ov006_021a3b88(void *a, void *b);
extern uint8_t data_ov006_021b9730[];
extern uint8_t data_ov006_021b9748[];
extern uint8_t data_ov006_021b9760[];
extern void func_02082a68(void);
extern void func_02082364(void);
extern void func_02082820(void);

void func_ov006_021ad55c(void)
{
    uint16_t *p;

    func_ov006_021a3b88(data_ov006_021b9730, func_02082a68);
    func_ov006_021a3b88(data_ov006_021b9748, func_02082364);
    func_ov006_021a3b88(data_ov006_021b9760, func_02082820);

    p = (uint16_t *)0x4001008;
    p[0] = (p[0] & ~3) | 3;
    p[1] = (p[1] & ~3) | 3;

    p = (uint16_t *)0x4000008;
    p[0] = (p[0] & ~3) | 3;
    p[1] = (p[1] & ~3) | 3;
    p[2] = (p[2] & ~3) | 3;
}
