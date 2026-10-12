#include "ffc/types.h"

extern uint32_t data_ov002_021d5010[];
extern uint32_t data_ov002_021d5018[];

int func_ov002_0219cdbc(uint8_t *p, uint32_t v) {
    uint32_t *src;
    uint32_t lo, hi;
    if (*(uint32_t *)(p + 0x98)) {
        return 1;
    }
    if (*(uint8_t *)(p + 0x90)) {
        return 0;
    }
    if (*(uint32_t *)(p + 0x88) != v) {
        if (*(uint32_t *)(p + 0x88) == 2) {
            src = data_ov002_021d5010;
        } else {
            src = data_ov002_021d5018;
        }
        lo = src[0];
        hi = src[1];
        *(uint32_t *)(p + 0x80) = lo;
        *(uint32_t *)(p + 0x84) = hi;
        *(uint32_t *)(p + 0x88) = v;
        *(uint8_t *)(p + 0x90) = 1;
    }
    return 1;
}
