#include "ffc/types.h"

extern uint8_t *data_ov006_021bc6fc;
extern void func_ov006_021a4cac(int32_t x);
extern void func_ov006_021b0600(int32_t x);

void func_ov006_021a47c8(void) {
    uint8_t *p = data_ov006_021bc6fc;
    if (p[0x11d] == 2) {
        func_ov006_021a4cac(0);
    } else {
        func_ov006_021a4cac(2);
    }
    func_ov006_021b0600(1);
}
