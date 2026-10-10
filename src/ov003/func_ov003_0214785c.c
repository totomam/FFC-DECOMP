#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov003_0214785c(Pair *dst, const Pair *src) {
    *dst = *src;
}
