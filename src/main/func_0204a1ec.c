#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020b011c;

void func_0204a1ec(uint8_t *p) {
    Pair tmp;
    if (p[0x9d]) {
        *(uint32_t *)(p + 0xa0) = 1;
    }
    tmp = data_020b011c;
    *(Pair *)(p + 0x80) = tmp;
    *(uint32_t *)(p + 0xa4) = 1 ^ *(uint32_t *)(p + 0xa4);
}
