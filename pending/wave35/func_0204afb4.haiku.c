#include "ffc/types.h"

int32_t func_0204afb4(int8_t *p, uint32_t n) {
    int32_t val = 0;
    int32_t cnt = 0;
    uint32_t m = n - 1;
    if (n != 0) {
        do {
            int8_t c = p[cnt];
            if (c != 0x20 && c >= 0x30 && c <= 0x39) {
                val = c + val * 10;
                val -= 0x30;
                cnt++;
                if (cnt > 9) {
                    return -1;
                }
            }
            p++;
        } while (m-- != 0);
    }
    if (cnt == 0) {
        return -1;
    }
    return val;
}
