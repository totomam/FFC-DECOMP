#include "ffc/types.h"

extern int func_ov000_02145734(void);
extern uint32_t data_ov000_0216bc60[];

int func_ov000_0214577c(uint32_t x)
{
    int result = 0;
    if (func_ov000_02145734() != 0) {
        uint32_t n = ~data_ov000_0216bc60[4];
        if ((n & x) == n) {
            result = 1;
        }
    }
    return result;
}
