#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c5c64;
extern Pair data_ov007_021c5c6c;

void func_ov007_021b0d00(uint32_t *p) {
    if (p[38] == 0) {
        *(Pair *)(p + 32) = data_ov007_021c5c64;
    } else {
        *(Pair *)(p + 32) = data_ov007_021c5c6c;
    }
}
