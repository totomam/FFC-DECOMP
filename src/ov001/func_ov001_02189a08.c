#include "ffc/types.h"

extern uint64_t func_0209a6d4(uint64_t first, uint64_t second);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern uint64_t data_ov001_0218f174[16];

int func_ov001_02189a08(char *out, uint64_t x, int width) {
    int n = 0;
    int flag;
    int i;

    if (x >= 0x016345785d8a0000ULL) {
        return -1;
    }

    i = 0;
    flag = 0;
    for (; i < 16; i++) {
        uint64_t p = data_ov001_0218f174[i];

        if (x >= p) {
            uint32_t d = (uint32_t)func_0209a6d4(x, p);
            x -= func_0209a71c((uint64_t)d, p);
            flag = 1;
            out[n] = (char)(d + 0x30);
            n++;
        } else {
            if (flag != 0 || (17 - i) <= width) {
                out[n] = 0x30;
                n++;
            }
        }
    }

    out[n] = (char)(x + 0x30);
    n++;
    return n;
}
