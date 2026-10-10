#include "ffc/types.h"

extern void func_ov006_021a3b88(void *a, void (*b)(void));
extern uint8_t data_ov006_021b9490[];
extern void func_02082820(void);

void func_ov006_021a9008(void) {
    func_ov006_021a3b88(data_ov006_021b9490, func_02082820);
    {
        volatile uint16_t *p = (volatile uint16_t *)0x04001008;
        uint16_t r2;
        r2 = p[0];
        r2 = (r2 & ~3) | 3;
        p[0] = r2;
        r2 = p[1];
        r2 = (r2 & ~3) | 3;
        p[1] = r2;
    }
    {
        volatile uint16_t *p = (volatile uint16_t *)0x0400000a;
        uint16_t r2;
        r2 = p[0];
        r2 = (r2 & ~3) | 3;
        p[0] = r2;
        r2 = p[1];
        r2 = (r2 & ~3) | 3;
        p[1] = r2;
    }
}
