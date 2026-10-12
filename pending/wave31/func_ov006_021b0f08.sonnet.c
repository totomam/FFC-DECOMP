#include "ffc/types.h"

extern void func_ov006_021b1054(void);
extern void func_ov006_021b0f64(void);
extern void func_ov006_021b0e40(void);
extern void func_02088f30(void);
extern uint8_t *data_ov006_021bc7f4;

void func_ov006_021b0f08(uint16_t *p) {
    uint8_t *g;

    if (p[1] != 0) {
        return;
    }
    g = data_ov006_021bc7f4;
    if (g[0x1b94] != 0) {
        if (p[0] == 2) {
            g[0x1b94] = 2;
        }
        return;
    }
    if (p[0] != 0x26) {
        return;
    }
    if (p[4] == 4) {
        func_ov006_021b0e40();
        return;
    }
    if (p[4] == 5) {
        if (g[0x1b96] != 0) {
            func_ov006_021b1054();
        } else {
            func_ov006_021b0f64();
        }
        func_ov006_021b0e40();
        return;
    }
    func_02088f30();
}
