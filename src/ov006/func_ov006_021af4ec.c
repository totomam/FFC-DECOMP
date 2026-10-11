#include "ffc/types.h"

extern void func_020878ac(void *dst, uint32_t n);
extern void func_02082820(void *dst, int val, uint32_t n);
extern uint8_t *data_ov006_021bc7d0;

void func_ov006_021af4ec(void) {
    uint8_t *p = data_ov006_021bc7d0;
    if (p[0x604]) {
        func_020878ac(p + 4, 0x600);
        p = data_ov006_021bc7d0;
        func_02082820(p + 4, 0, 0x600);
        p = data_ov006_021bc7d0;
        p[0x604] = 0;
    }
}
