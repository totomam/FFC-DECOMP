#include "ffc/types.h"

extern uint32_t data_ov006_021ba1c8[];
extern void func_02084b2c(void *p, int a, int b);

void func_ov006_0219cd14(int idx)
{
    if (data_ov006_021ba1c8[1] == 0) {
        return;
    }
    int i = idx - 1;
    int zero = 0;
    int n = 0x1e;
    func_02084b2c((void *)(data_ov006_021ba1c8[1] + (i << 5)), 0, n);
    *(uint32_t *)(data_ov006_021ba1c8[1] + (i << 2) + (n << 4)) = zero;
}
