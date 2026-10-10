#include "ffc/types.h"

extern void func_ov006_021a3b88(void *a, void *b);
extern uint8_t data_ov006_021b94c4;
extern uint8_t data_ov006_021b94d8;
extern uint8_t data_ov006_021b94f0;
extern uint8_t data_ov006_021b9508;
extern void func_0208243c(void);
extern void func_02082a68(void);
extern void func_02082364(void);
extern void func_02082820(void);

void func_ov006_021a9fc0(void) {
    func_ov006_021a3b88(&data_ov006_021b94c4, (void *)func_0208243c);
    func_ov006_021a3b88(&data_ov006_021b94d8, (void *)func_02082a68);
    func_ov006_021a3b88(&data_ov006_021b94f0, (void *)func_02082364);
    func_ov006_021a3b88(&data_ov006_021b9508, (void *)func_02082820);

    {
        uint16_t *p = (uint16_t *)0x4001008;
        p[0] = (p[0] & ~3) | 3;
        p[1] = (p[1] & ~3) | 3;
    }
    {
        uint16_t *p = (uint16_t *)0x4000008;
        p[0] = (p[0] & ~3) | 2;
        p[1] = (p[1] & ~3) | 3;
        p[2] = (p[2] & ~3) | 3;
    }
}
