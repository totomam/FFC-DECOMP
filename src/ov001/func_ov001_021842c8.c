#include "ffc/types.h"

extern uint8_t func_ov001_02184290(uint8_t c);

void func_ov001_021842c8(uint8_t *src, int n, uint8_t *dst) {
    int i = 0;
    int j;
    uint8_t t[3];
    uint8_t buf[4];
    if (n > 0) {
        do {
            for (j = 0; j <= 2; j++) {
                if (i < n) {
                    t[j] = *src;
                    src++;
                } else {
                    t[j] = 0;
                }
                i++;
            }
            buf[0] = t[0] >> 2;
            buf[1] = ((t[0] & 3) << 4) + (t[1] >> 4);
            buf[2] = ((t[1] & 0xF) << 2) + (t[2] >> 6);
            buf[3] = t[2] & 0x3f;
            for (j = 0; j <= 3; j++) {
                *dst = func_ov001_02184290(buf[j]);
                dst++;
            }
        } while (i < n);
    }
    *dst = 0;
}
