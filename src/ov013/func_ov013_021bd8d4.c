#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov013_021c4240;
extern Pair data_ov013_021c4248;

void func_ov013_021bd8d4(uint32_t *p) {
    if (p[52] == 0) {
        *(Pair *)(p + 46) = data_ov013_021c4240;
    } else {
        *(Pair *)(p + 46) = data_ov013_021c4248;
    }
}
