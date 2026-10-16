#include "ffc/types.h"
extern char data_ov002_021d5cf4;
typedef struct { void *vt; uint32_t a,b; uint32_t c; uint8_t d[3]; uint8_t e; uint32_t f; uint8_t g; uint8_t pad[3]; uint32_t h; uint32_t i; uint32_t j;} S;
void func_ov002_021b7c5c(S *p, uint8_t x, uint32_t y) {
    p->vt = &data_ov002_021d5cf4;
    p->c &= ~0xff;
    p->e = 0;
    p->f = 0;
    p->g = x;
    p->h = y;
    p->i = 0;
    p->j = 0x12;
}
