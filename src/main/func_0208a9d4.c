#include "ffc/types.h"

extern void func_0208ae70(int a, int b);
extern uint16_t data_021434e4[];

int func_0208a9d4(uint16_t *out, int b) {
    int one = 1;
    func_0208ae70(one, b);
    if (data_021434e4[0x1c] & one) {
        return one;
    }
    out[0] = data_021434e4[4];
    out[1] = data_021434e4[5];
    out[2] = data_021434e4[6];
    out[3] = data_021434e4[7];
    return 0;
}
