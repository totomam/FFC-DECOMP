#include "ffc/types.h"

extern uint16_t data_021434e4[];
extern void func_0208adc4(uint16_t *a, uint16_t *b);

int func_0208aa04(uint16_t *out)
{
    uint16_t *s = data_021434e4;
    if (s[0x38 / 2] & 1) {
        return 1;
    }
    out[0] = s[8 / 2];
    out[1] = s[0xa / 2];
    out[2] = s[0xc / 2];
    out[3] = s[0xe / 2];
    func_0208adc4(out, out);
    return 0;
}
