#include "ffc/types.h"

extern void func_ov006_021b1be8(void);
extern uint8_t *data_ov006_021bc808;

int func_ov006_021b2e5c(void) {
    uint8_t *p = data_ov006_021bc808;
    if (p[0xa90] == 5) {
        p[0xa90] = 6;
        func_ov006_021b1be8();
        return 1;
    }
    return 0;
}
