#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(uint32_t);

void func_ov001_02184d80(uint8_t *p) {
    int i = 0;
    uint32_t t = func_ov000_0216591c((uint32_t)p);
    do {
        uint8_t *base = p + (i << 4);
        if (*(uint32_t *)(base + 0x120) != 0) {
            if (t - *(uint32_t *)(base + 0x128) > 0xfa0) {
                *(uint32_t *)(base + 0x120) = 0;
            }
        }
        i++;
    } while (i < 200);
}
