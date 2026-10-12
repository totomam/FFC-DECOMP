#include "ffc/types.h"

extern uint8_t data_ov000_0216e254;
extern uint8_t data_ov000_0216e255[];
extern int func_0209a76c(int x);

uint8_t func_ov000_021504e8(void)
{
    int sum = 0;
    int i;
    int r;
    uint8_t n = data_ov000_0216e254;

    if (n > 0x10) {
        for (i = 0; i < 0x10; i++) {
            sum += data_ov000_0216e255[i];
        }
        r = sum / 16;
    } else {
        if (n != 0) {
            for (i = 0; i < (int)n; i++) {
                sum += data_ov000_0216e255[i];
            }
            r = func_0209a76c(sum);
        } else {
            r = 0;
        }
    }
    return (uint8_t)r;
}
