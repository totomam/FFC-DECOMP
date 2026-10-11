#include "ffc/types.h"

extern uint8_t data_ov006_021bc73c;
extern uint16_t data_ov006_021b84d8[];
extern uint16_t data_ov006_021b84da[];
extern uint16_t data_ov006_021b84dc[];
extern uint16_t data_ov006_021b84de[];
extern void func_ov006_021b0600(int x);
extern void func_ov006_021a3d68(uint16_t a, uint16_t b, uint16_t c, uint16_t d);

void func_ov006_021a6f98(int param)
{
    if (param == 1 || param == 3) {
        return;
    }
    data_ov006_021bc73c ^= 1;
    func_ov006_021b0600(8);
    {
        uint32_t i = data_ov006_021bc73c * 4;
        func_ov006_021a3d68(data_ov006_021b84d8[i],
                            data_ov006_021b84dc[i],
                            data_ov006_021b84da[i],
                            data_ov006_021b84de[i]);
    }
}
