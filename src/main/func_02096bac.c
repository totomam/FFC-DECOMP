#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

uint32_t func_02096bac(S s) {
    volatile uint32_t *p = &s.a;
    uint32_t t = p[1] & 0x7fffffff;
    uint32_t r = s.a;
    p[1] = t;
    return r;
}
