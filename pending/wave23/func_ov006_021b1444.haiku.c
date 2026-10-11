#include "ffc/types.h"

extern int8_t *data_ov006_021bc7f8;
extern void func_02081b78(uint32_t addr, int32_t v);
extern void func_ov006_021b5770(int32_t a, void *fn);
extern void func_ov006_021b1480(void);

void func_ov006_021b1444(int32_t a)
{
    data_ov006_021bc7f8[0x1a] = data_ov006_021bc7f8[0x1a] - 1;
    func_02081b78(0x4000050, data_ov006_021bc7f8[0x1a]);
    if (data_ov006_021bc7f8[0x1a] <= -12) {
        func_ov006_021b5770(a, func_ov006_021b1480);
    }
}
