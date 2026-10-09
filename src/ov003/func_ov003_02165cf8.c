#include "ffc/types.h"
extern char data_ov003_0217ab9c;
typedef struct { void *p; uint32_t a, b; uint32_t c; uint32_t d; uint32_t e; uint32_t f; uint32_t g; } S;
void func_ov003_02165cf8(S *s, uint32_t x, uint32_t y, uint32_t z) {
    s->c &= ~0xFF;
    s->p = &data_ov003_0217ab9c;
    s->e = x;
    s->f = y;
    s->g = z;
}
