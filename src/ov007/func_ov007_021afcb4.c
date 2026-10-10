#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c5a8c;
extern Pair data_ov007_021c5a94;

void func_ov007_021afcb4(uint32_t *p) {
    if (p[35] == 0) {
        *(Pair *)(p + 32) = data_ov007_021c5a8c;
    } else {
        *(Pair *)(p + 32) = data_ov007_021c5a94;
    }
}
