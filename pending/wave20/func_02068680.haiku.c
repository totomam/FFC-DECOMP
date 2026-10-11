#include "ffc/types.h"

typedef struct {
    uint32_t a : 1;
    uint32_t rest : 31;
} Flags;

uint32_t func_02068680(uint8_t *p) {
    uint32_t v;
    Flags *fl = (Flags *)(p + 0x4c);
    if (fl->a) {
        v = *(uint32_t *)(p + 0x50);
    } else {
        uint32_t b = *(uint8_t *)(p + 0x4c);
        v = (b << 24) >> 25;
    }
    return v == 0;
}
