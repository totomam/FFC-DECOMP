#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;
extern void func_02084b2c(void *dst, int val, uint32_t size);

void func_ov006_021b34a8(void) {
    uint32_t n = 0x100;
    func_02084b2c(data_ov006_021bc808 + n, 0, n);
    func_02084b2c(data_ov006_021bc808, 0, n);
    *(uint32_t *)(data_ov006_021bc808 + 0xab0) = (uint32_t)data_ov006_021bc808;
}
