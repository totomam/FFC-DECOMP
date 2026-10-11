#include "ffc/types.h"

extern int func_0208bf10(void *a, void *b, void *c);
extern uint32_t data_ov001_0218ffdc;

int func_ov001_021750b0(uint8_t *p) {
    int out;
    int ret = func_0208bf10(p + 0x13c, &data_ov001_0218ffdc, &out);
    if (ret != 1) {
        return -1;
    }
    return out;
}
