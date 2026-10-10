#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c4770;
extern Pair data_ov007_021c4778;

void func_ov007_021a8ca8(uint32_t *p) {
    if (p[52] == 1) {
        *(Pair *)(p + 46) = data_ov007_021c4770;
    } else {
        *(Pair *)(p + 46) = data_ov007_021c4778;
    }
}
