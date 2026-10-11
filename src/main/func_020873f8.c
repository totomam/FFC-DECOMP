#include "ffc/types.h"

extern uint32_t data_020b2b2c[];
extern int func_02087460(void);
extern uint32_t func_02087434(void);

uint32_t func_020873f8(void)
{
    if (data_020b2b2c[1] == 0xFFFFFFFFu) {
        if (func_02087460() != 0) {
            data_020b2b2c[1] = 0x1800004u;
        } else {
            data_020b2b2c[1] = 0x80000001u;
        }
        data_020b2b2c[1] = func_02087434() | data_020b2b2c[1];
    }
    return data_020b2b2c[1];
}
