#include "ffc/types.h"

extern uint8_t *data_ov006_021bc808;
extern void func_02084b2c(void *dst, int val, uint32_t size);

void func_ov006_021b34a8(void)
{
    func_02084b2c(data_ov006_021bc808 + 0x100, 0, 0x100);
    func_02084b2c(data_ov006_021bc808, 0, 0x100);
    *(uint8_t **)(data_ov006_021bc808 + 0xab0) = data_ov006_021bc808;
}
