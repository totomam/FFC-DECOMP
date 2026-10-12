#include "ffc/types.h"

extern void *func_ov000_02152ae4(uint32_t x);
extern uint32_t func_ov000_0214fa18(void);

int func_ov000_0215448c(int32_t n) {
    uint8_t *base = (uint8_t *)func_ov000_02152ae4(0x10);
    uint16_t mask;
    n = (int8_t)(n + 2);
    mask = (uint16_t)(1u << n);
    if (n <= *(uint16_t *)(base + 0x14ce)) {
        do {
            int hit = (func_ov000_0214fa18() & mask) ? 1 : 0;
            if (hit == 1) break;
            mask = (uint16_t)(mask << 2);
            n = (int8_t)(n + 2);
        } while (n <= *(uint16_t *)(base + 0x14ce));
    }
    if (n <= *(uint16_t *)(base + 0x14ce)) return n;
    return -1;
}
