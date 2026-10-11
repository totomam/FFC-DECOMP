#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c5f74;
extern Pair data_ov007_021c5f7c;

void func_ov007_021b1f80(uint8_t *p) {
    if (p[0xd0] == 0) {
        *(Pair *)(p + 0xb0) = data_ov007_021c5f74;
    } else {
        *(Pair *)(p + 0xb0) = data_ov007_021c5f7c;
    }
}
