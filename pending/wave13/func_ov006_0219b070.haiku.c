#include "ffc/types.h"

extern uint32_t data_ov006_021ba0a8;
extern uint8_t data_ov006_021ba0c8;
extern void func_ov006_0219b090(void);

void func_ov006_0219b070(void) {
    uint32_t *p = &data_ov006_021ba0a8;
    p[6] = 0;
    p[7] = 0;
    (&data_ov006_021ba0c8)[4] = 1;
    p[5] = 0;
    func_ov006_0219b090();
}
