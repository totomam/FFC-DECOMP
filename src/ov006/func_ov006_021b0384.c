#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern void func_02084b2c(void *p, int c, uint32_t n);
extern void func_ov006_021b0414(int32_t a);

void func_ov006_021b0384(int32_t a) {
    uint8_t *base = data_ov006_021bc7e4;
    func_02084b2c(base + (a << 8), 0, 0xef);
    *(base + (a << 8) + 0xe7) = 0xff;
    func_ov006_021b0414(a);
}
