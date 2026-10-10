#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} S;

uint32_t func_02096bac(S s) {
    volatile S *p = (volatile S *)&s;
    p->b &= 0x7fffffff;
    return s.a;
}
