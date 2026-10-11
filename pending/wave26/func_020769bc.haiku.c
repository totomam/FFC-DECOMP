#include "ffc/types.h"

extern uint32_t data_020b2874[2];
extern uint32_t data_020b287c[2];

void func_020769bc(uint8_t *p) {
    uint32_t v = *(uint32_t *)(p + 0x94);
    if (v != 0) {
        if (v == 1) {
            uint32_t *s = data_020b2874;
            uint32_t a = s[0];
            uint32_t b = s[1];
            *(uint32_t *)(p + 0x88) = a;
            *(uint32_t *)(p + 0x8c) = b;
            return;
        }
    } else {
        uint32_t *s = data_020b287c;
        uint32_t a = s[0];
        uint32_t b = s[1];
        *(uint32_t *)(p + 0x88) = a;
        *(uint32_t *)(p + 0x8c) = b;
    }
}
