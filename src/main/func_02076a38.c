#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_020b288c;
extern Pair data_020b2894;

void func_02076a38(uint8_t *p) {
    uint32_t mode = *(uint32_t *)(p + 0x94);
    if (mode != 0) {
        if (mode == 1) {
            *(uint8_t *)(p + 0x98) = 1;
            *(Pair *)(p + 0x88) = data_020b288c;
        }
    } else {
        *(Pair *)(p + 0x88) = data_020b2894;
    }
}
