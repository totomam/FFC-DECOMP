#include "ffc/types.h"

extern void WaitByLoop(uint32_t);

void func_020867f4(uint32_t arg, volatile uint8_t *p) {
    if (arg == 0) {
        uint32_t n = 0;
        uint8_t f;
        p[2] = 0;
        for (;;) {
            p[0] = (uint8_t)((n & 0xf) | 0x80);
            while (p[0] != p[1] && p[2] == 0) {
                WaitByLoop(0x400);
            }
            f = p[2];
            n++;
            if (f != 0) {
                break;
            }
        }
        p[3] = 1;
    } else {
        int sum = 0;
        p[1] = 0;
        do {
            if (p[1] != p[0]) {
                p[1] = p[0];
                sum += p[1];
            } else {
                WaitByLoop(0x400);
            }
        } while (sum < 0x300);
        p[3] = 0;
        p[2] = 1;
        while (p[3] == 0) {
            WaitByLoop(0x400);
        }
    }
}
