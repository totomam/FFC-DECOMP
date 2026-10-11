#include "ffc/types.h"

extern uint8_t data_ov006_021bc7ac;
extern uint8_t data_ov006_021b87cc[];
extern uint8_t data_ov006_021b87d0[];
extern uint8_t data_ov006_021b87ce[];
extern uint8_t data_ov006_021b87d2[];

extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);
extern void func_ov006_021a3cfc(uint32_t a, uint16_t b, uint16_t c, uint16_t d);

void func_ov006_021addb4(void)
{
    uint32_t i = data_ov006_021bc7ac;
    if (i < 4) {
        uint32_t o = i * 8;
        func_ov006_021a3d68(*(uint16_t *)(data_ov006_021b87cc + o),
                            *(uint16_t *)(data_ov006_021b87d0 + o),
                            *(uint16_t *)(data_ov006_021b87ce + o),
                            *(uint16_t *)(data_ov006_021b87d2 + o));
    } else {
        uint32_t o = i * 8;
        func_ov006_021a3cfc(0,
                            *(uint16_t *)(data_ov006_021b87cc + o),
                            *(uint16_t *)(data_ov006_021b87d0 + o),
                            *(uint16_t *)(data_ov006_021b87ce + o));
    }
}
