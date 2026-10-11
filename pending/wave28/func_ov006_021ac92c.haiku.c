#include "ffc/types.h"

extern void func_ov006_021a3b88(void *a, void *b);
extern uint8_t data_ov006_021b966c[];
extern void func_02082a68(void);
extern uint8_t data_ov006_021b9684[];
extern void func_02082364(void);
extern uint8_t data_ov006_021b969c[];
extern void func_02082820(void);

void func_ov006_021ac92c(void)
{
    func_ov006_021a3b88(data_ov006_021b966c, func_02082a68);
    func_ov006_021a3b88(data_ov006_021b9684, func_02082364);
    func_ov006_021a3b88(data_ov006_021b969c, func_02082820);

    {
        volatile uint16_t *p = (volatile uint16_t *)0x04001008;
        *p = (uint16_t)((*p & ~3) | 3);
        p[1] = (uint16_t)((p[1] & ~3) | 3);
    }
    {
        volatile uint16_t *p = (volatile uint16_t *)0x0400000a;
        *p = (uint16_t)((*p & ~3) | 3);
        p[1] = (uint16_t)((p[1] & ~3) | 3);
    }
}
