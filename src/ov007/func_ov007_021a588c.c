#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

extern Pair data_ov007_021c42d8;
extern Pair data_ov007_021c42e0;

void func_ov007_021a588c(uint32_t *p) {
    if (p[51] == 0) {
        *(Pair *)(p + 46) = data_ov007_021c42d8;
    } else {
        *(Pair *)(p + 46) = data_ov007_021c42e0;
    }
}
