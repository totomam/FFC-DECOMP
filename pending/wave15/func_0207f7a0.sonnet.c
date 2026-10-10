#include "ffc/types.h"

extern uint32_t func_0207f4bc(void *p, uint32_t a, uint32_t b);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t fc;
} S;

uint32_t func_0207f7a0(uint32_t unused, S *p) {
    uint32_t r = func_0207f4bc(p, 8, 1);
    p->f4 = 0;
    p->fc &= ~0x30;
    return r;
}
