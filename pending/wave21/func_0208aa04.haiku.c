#include "ffc/types.h"

extern uint16_t data_021434e4[];
extern int func_0208adc4(void *a, void *b);

int func_0208aa04(uint16_t *p)
{
    if (data_021434e4[0x38 / 2] & 1) {
        return 1;
    }
    p[0] = data_021434e4[4];
    p[1] = data_021434e4[5];
    p[2] = data_021434e4[6];
    p[3] = data_021434e4[7];
    func_0208adc4(p, p);
    return 0;
}
