#include "ffc/types.h"
typedef struct { uint32_t a : 3; uint32_t b : 2; uint32_t c : 27; } F;
typedef struct { uint32_t t[5][4]; } R;
extern R data_0209efe8[];
static inline F *at(F *q, uint32_t i) { return &q[i]; }
uint32_t func_0204f878(uint8_t *p, uint32_t i) {
    F *e = at((F *)(p + 0x34), i);
    return data_0209efe8[i].t[e->a][e->b];
}
