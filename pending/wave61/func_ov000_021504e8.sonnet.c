#include "ffc/types.h"
extern uint8_t data_ov000_0216e254;
extern uint8_t data_ov000_0216e255[];
extern int func_0209a76c(int);
uint8_t func_ov000_021504e8(void)
{
    int sum = 0;
    int i;
    uint8_t n = data_ov000_0216e254;
    if (n > 16) {
        for (i = 0; i < 16; i++) sum += data_ov000_0216e255[i];
        sum = sum / 16;
    } else if (n != 0) {
        for (i = 0; i < n; i++) sum += data_ov000_0216e255[i];
        sum = func_0209a76c(sum);
    }
    return sum;
}
