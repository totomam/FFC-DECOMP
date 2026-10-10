#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

void func_ov003_021475c0(Pair *dst, const Pair *src) {
    *dst = *src;
}
