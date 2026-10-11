#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern void func_ov001_0218e73c(int x);
extern Pair data_ov007_021c5af0;

void func_ov007_021b035c(uint8_t *p) {
    int i;
    for (i = 0; i < 0x3c; i++) {
        func_ov001_0218e73c(i);
    }
    *(Pair *)(p + 0xb0) = data_ov007_021c5af0;
}
