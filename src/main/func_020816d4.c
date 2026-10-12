#include "ffc/types.h"

extern int32_t func_02081210(int32_t x);
extern int16_t data_020a5bd0[];

uint16_t func_020816d4(int32_t a, int32_t b) {
    int32_t x, y, off, flag;
    if (a > 0) {
        if (b > 0) {
            if (b > a) {
                x = a; y = b; off = 0; flag = 1;
            } else if (b < a) {
                x = b; y = a; off = 1 << 14; flag = 0;
            } else {
                return 0x2000;
            }
        } else {
            if (b < 0) {
                int32_t m = -b;
                if (m < a) {
                    x = m; y = a; off = 1 << 14; flag = 1;
                } else if (m > a) {
                    x = a; y = m; off = 2 << 14; flag = 0;
                } else {
                    return 0x6000;
                }
            } else {
                return 0x4000;
            }
        }
    } else if (a < 0) {
        int32_t n = -a;
        if (b < 0) {
            int32_t m = -b;
            if (m > n) {
                x = n; y = m; off = -0x8000; flag = 1;
            } else if (m < n) {
                x = m; y = n; off = -0x4000; flag = 0;
            } else {
                return 0xa000;
            }
        } else if (b > 0) {
            if (b < n) {
                x = b; y = n; off = -0x4000; flag = 1;
            } else if (b > n) {
                x = n; y = b; off = 0; flag = 0;
            } else {
                return 0xe000;
            }
        } else {
            return 0xc000;
        }
    } else {
        if (b >= 0) return 0;
        return 0x8000;
    }
    if (y == 0) return 0;
    if (flag) {
        return (uint16_t)(off + data_020a5bd0[func_02081210(x) >> 5]);
    }
    return (uint16_t)(off - data_020a5bd0[func_02081210(x) >> 5]);
}
