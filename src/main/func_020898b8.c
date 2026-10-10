#include "ffc/types.h"

typedef struct {
    int32_t a;
    int32_t b;
    int32_t c;
} S;

int32_t func_020898b8(S *p) {
    return p->c + (p->b + p->a * 60) * 60;
}
