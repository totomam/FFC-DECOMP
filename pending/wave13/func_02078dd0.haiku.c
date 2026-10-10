#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint8_t d;
    uint32_t f;
    uint32_t e;
} S;

void func_02078dd0(S *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f) {
    p->a = a;
    p->b = b;
    p->e = e;
    p->c = c;
    p->d = (uint8_t)d;
    p->f = f;
}
