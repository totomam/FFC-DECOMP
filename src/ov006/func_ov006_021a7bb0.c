#include "ffc/types.h"

extern uint8_t data_ov006_021bc748;
extern uint16_t data_ov006_021b8524[];
extern uint16_t data_ov006_021b8522[];
extern uint16_t data_ov006_021b8526[];
extern uint16_t data_ov006_021b8520[];
extern uint32_t func_02081334(uint32_t v, uint32_t m);
extern void func_ov006_021b0600(uint32_t x);
extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);

void func_ov006_021a7bb0(int param)
{
    uint32_t idx;
    if (param == 1) {
        data_ov006_021bc748 = func_02081334(data_ov006_021bc748 + 2, 3);
    } else {
        data_ov006_021bc748 = func_02081334(data_ov006_021bc748 + 1, 3);
    }
    func_ov006_021b0600(8);
    idx = data_ov006_021bc748;
    func_ov006_021a3d68(data_ov006_021b8520[idx * 4], data_ov006_021b8524[idx * 4],
                        data_ov006_021b8522[idx * 4], data_ov006_021b8526[idx * 4]);
}
