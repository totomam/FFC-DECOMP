#include "ffc/types.h"
extern uint32_t data_ov003_0217a6fc;
typedef struct { uint32_t *vt; uint32_t a; uint32_t b; uint32_t c; uint32_t d; uint32_t e; uint16_t f; uint8_t g; uint8_t h; } S;
void func_ov003_021643b0(S *p, uint32_t a, uint16_t b, uint8_t c, uint8_t d) {
    p->c &= ~0xff;
    p->vt = &data_ov003_0217a6fc;
    p->e = a;
    p->f = b;
    p->g = c;
    p->h = d;
}
