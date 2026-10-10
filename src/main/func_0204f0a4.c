#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t *tab;
} S;

uint32_t func_0204f0a4(S *p, uint32_t i) {
    uint32_t *e = p->tab + i;
    return e[25];
}
