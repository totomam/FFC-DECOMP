#include "ffc/types.h"

extern uint32_t func_02018014(uint32_t);
extern void func_0201d14c(uint32_t, uint32_t, void *);
extern uint32_t data_020b8e44;
extern uint32_t data_020b93b8;

int func_ov003_021481c0(int x)
{
    if (x == 0xc7) {
        uint8_t buf[0x28];
        uint32_t i = 1;
        uint32_t n = func_02018014(data_020b8e44);
        if (n > 1) {
            do {
                func_0201d14c(data_020b93b8, i, buf);
                if (buf[2] == 1 && *(uint16_t *)&buf[4] == 1) {
                    return (int)i;
                }
                i++;
            } while (i < func_02018014(data_020b8e44));
        }
        x = 0;
    }
    return x;
}
