#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern void func_02084ca4(uint8_t *p, uint32_t a, uint32_t b);

void func_ov006_021aff14(uint32_t a)
{
    func_02084ca4(data_ov006_021bc7e4 + 0x440, a, 0x20);
}
