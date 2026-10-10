#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} Pair;

typedef struct {
    uint32_t pad[2];
    uint32_t a;
    uint32_t b;
} Dst;

void func_02036ca8(Dst *dst, const Pair *src) {
    dst->a = src->a;
    dst->b = src->b;
}
