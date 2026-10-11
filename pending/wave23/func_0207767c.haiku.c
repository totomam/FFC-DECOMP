#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020b28f4;
extern Pair data_020b28fc;

void func_0207767c(uint8_t *p) {
    if (p[0x94]) {
        *(Pair *)(p + 0x88) = data_020b28f4;
    } else {
        *(Pair *)(p + 0x88) = data_020b28fc;
    }
}
