#include "ffc/types.h"
extern char data_ov003_0217ad4c;
typedef struct { void *p; uint32_t a, b; uint32_t c; uint32_t d; uint32_t e; uint32_t f; uint32_t g; } S;
void func_ov003_021659c4(S *s, uint32_t x, uint32_t y, uint32_t z) {
    s->c &= ~0xFF;
    s->p = &data_ov003_0217ad4c;
    s->e = x;
    s->f = y;
    s->g = z;
}
