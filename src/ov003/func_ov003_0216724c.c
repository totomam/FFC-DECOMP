#include "ffc/types.h"
extern uint32_t data_ov003_0217b0dc;
typedef struct { uint32_t vt; uint32_t p4, p8; uint32_t w0c; uint32_t p10; uint32_t w14, w18; uint8_t b1c; uint8_t p1d[3]; uint32_t w20; uint8_t b24; uint8_t p25[3]; uint32_t w28, w2c, w30; } S;
void func_ov003_0216724c(S *p, uint32_t a, uint32_t b, uint8_t c, uint32_t d, uint8_t e, uint32_t f, uint32_t g, uint32_t h) {
    p->w0c &= ~0xff;
    p->vt = (uint32_t)&data_ov003_0217b0dc;
    p->w14 = a;
    p->w20 = d;
    p->b1c = c;
    p->w18 = b;
    p->b24 = e;
    p->w28 = f;
    p->w2c = g;
    p->w30 = h;
}
