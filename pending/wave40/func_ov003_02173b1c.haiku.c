#include "ffc/types.h"

extern uint32_t func_02018014(uint32_t v);
extern uint32_t func_0201d014(uint32_t h, uint32_t idx, void *out);
extern uint32_t func_02036ba8(void *p);
extern uint32_t func_0201d14c(uint32_t h, uint32_t idx, void *out);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

int32_t func_ov003_02173b1c(void)
{
    uint32_t i = 1;
    uint8_t x[0x10];
    uint8_t z[0x28];
    uint8_t y[0x10];

    if (func_02018014(data_020b8e44) > 1) {
        do {
            func_0201d014(data_020b93b8, i, x);
            if (func_02036ba8(x) != 0) {
                func_0201d14c(data_020b93b8, i, z);
                if (z[2] == 1) {
                    uint16_t h = *(uint16_t *)&z[4];
                    func_0201d014(data_020b93b8, h, y);
                    if (func_02036ba8(y) != 0) {
                        return (int32_t)i;
                    }
                }
            }
            i++;
        } while (i < func_02018014(data_020b8e44));
    }
    return -1;
}
