#include "ffc/types.h"

typedef struct { uint32_t x, y; } S;
extern S data_ov007_021c2e84;

void func_ov007_0219c114(uint8_t *r0) {
    if (*(uint32_t *)(r0 + 0x88) >= 0x14) {
        uint32_t *s = *(uint32_t **)(r0 + 0x80);
        uint32_t t = s[1] & (s[2] ^ s[1]);
        if (t & 0x1c0b) {
            *(uint8_t *)(r0 + 0x8c) = 1;
        }
    }
    if (*(uint32_t *)(r0 + 0x88) >= 0x77) {
        *(S *)(r0 + 0x90) = data_ov007_021c2e84;
    }
}
