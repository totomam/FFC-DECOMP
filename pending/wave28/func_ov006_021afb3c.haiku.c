#include "ffc/types.h"

extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint8_t *data_ov006_021bc7e0;
extern uint8_t data_ov006_021b8914[];

int32_t func_ov006_021afb3c(uint8_t **out) {
    int32_t count = 0;
    int32_t i;
    uint8_t *base = data_ov006_021bc7e0 + 0x1300;

    *out = base;
    for (i = 0; i < 20; i++) {
        if (func_02090410(base + i * 0x2a + 0x20, data_ov006_021b8914, 6) != 0) {
            count++;
        }
    }
    return count;
}
