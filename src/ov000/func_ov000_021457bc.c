#include "ffc/types.h"

extern uint8_t data_ov000_0216bc60[];
extern int func_ov000_0214577c(uint32_t a);
extern int func_ov000_021457a4(uint32_t a);

int func_ov000_021457bc(uint32_t a) {
    int r6 = 1;
    uint32_t r0 = *(uint32_t *)(data_ov000_0216bc60 + 0x50);
    int r4 = 1;
    int r1 = 1;
    int r2 = 1;

    if (r0 != 0 && a != r0) {
        r2 = 0;
    }
    if (r2 == 0 && a != 0x7f000001) {
        r1 = 0;
    }
    if (r1 == 0) {
        if (func_ov000_0214577c(a) == 0) {
            r4 = 0;
        }
    }
    if (r4 == 0) {
        if (func_ov000_021457a4(a) == 0) {
            r6 = 0;
        }
    }
    return r6;
}
