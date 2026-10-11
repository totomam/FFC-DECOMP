#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c53ec;

void func_ov007_021ada1c(uint8_t *p) {
    if (*(uint32_t *)(p + 0x88) == 0) {
        uint32_t v = *(uint32_t *)(p + 0xc);
        v = (v & ~0xffu) | 2;
        *(uint32_t *)(p + 0xc) = v;
    }
    *(Pair *)(p + 0x80) = data_ov007_021c53ec;
}
