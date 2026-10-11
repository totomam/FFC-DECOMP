#include "ffc/types.h"

extern uint32_t data_ov006_021ba1c8[];
extern void func_02084b2c(void *p, int v, int n);

void func_ov006_0219cd14(int idx)
{
    uint8_t *base = (uint8_t *)data_ov006_021ba1c8[1];
    if (base == 0) {
        return;
    }
    int i = idx - 1;
    func_02084b2c(base + (i << 5), 0, 0x1e);
    base = (uint8_t *)data_ov006_021ba1c8[1];
    *(uint32_t *)(base + (i << 2) + (0x1e << 4)) = 0;
}
