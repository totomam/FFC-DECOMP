#include "ffc/types.h"

extern uint8_t *data_ov006_021bc7e4;
extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_ov006_021afd60(void *p)
{
    func_02084ca4(p, data_ov006_021bc7e4 + 0x440, 0x20);
    data_ov006_021bc7e4[0x4e7] = 0;
}
