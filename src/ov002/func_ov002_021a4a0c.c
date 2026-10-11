#include "ffc/types.h"

extern uint32_t func_ov002_021c85f8(uint8_t *p);
extern uint8_t *func_ov002_02195f98(uint8_t *a, uint32_t b);

int func_ov002_021a4a0c(uint8_t *p) {
    uint8_t *r;
    uint32_t b = func_ov002_021c85f8(p + 0x144);
    r = func_ov002_02195f98(*(uint8_t **)(p + 0xf4), b);
    if (r != 0 && *(uint32_t *)(r + 0x10c) == 0xa21b58b6 &&
        *(uint32_t *)(r + 0x110) == 0x50434342 &&
        *(uint32_t *)(r + 0x114) == 0x5a1bb469) {
        return 1;
    }
    return 0;
}
