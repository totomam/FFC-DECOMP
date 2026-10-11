#include "ffc/types.h"

typedef struct {
    int32_t pad;
    int32_t v;
} S;

int32_t func_02031e60(S *a, S *b, int32_t *out) {
    int32_t d = b->v - a->v;
    *out = d % 8;
    return d / 8;
}
