#include "ffc/types.h"

extern uint32_t func_ov006_021b2054(void *p);
extern uint32_t func_ov006_021b2030(void);
extern uint8_t *data_ov006_021bc808;

int func_ov006_021b347c(uint8_t *p) {
    uint32_t id = func_ov006_021b2054(p + 10);
    if (id == 0) {
        return 0;
    }
    uint32_t v = func_ov006_021b2030();
    *(uint32_t *)(*(uint8_t **)&data_ov006_021bc808 + (id - 1) * 4 + 0xaa0) = v;
    return 1;
}
