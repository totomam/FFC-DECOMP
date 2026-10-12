#include "ffc/types.h"

extern int func_ov000_021493d8(void *a, uint8_t v);
extern int func_ov000_02149540(void *p);
extern int func_ov000_0214946c(void *p);

int func_ov000_02149414(uint8_t *a, uint8_t *b)
{
    uint8_t v = a[0xe7];
    if (v == 0xff) {
        return 1;
    }
    if (v <= 2) {
        return func_ov000_021493d8(a, v);
    }
    if (func_ov000_02149540(a + 0x40) == 0) {
        return 0;
    }
    if (func_ov000_0214946c(a) == 0) {
        return 0;
    }
    if (b[0x82] > 1) {
        return 0;
    }
    if (b[0x83] <= 1) {
        return 1;
    }
    return 0;
}
