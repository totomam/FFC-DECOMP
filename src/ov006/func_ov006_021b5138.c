#include "ffc/types.h"

extern uint8_t *data_ov006_021bc848;
extern void func_020878ac(uint8_t *p, uint32_t size);
extern void func_02082514(uint8_t *p, int val, uint32_t size);
extern void func_02082568(uint8_t *p, int val, uint32_t size);

void func_ov006_021b5138(void)
{
    uint32_t size = 0x800;
    uint32_t half;

    func_020878ac(data_ov006_021bc848, size);
    half = size >> 1;
    func_02082514(data_ov006_021bc848, 0, half);
    func_02082568(data_ov006_021bc848 + half, 0, half);
}
