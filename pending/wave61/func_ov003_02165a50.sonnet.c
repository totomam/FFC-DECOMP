#include "ffc/types.h"
extern uint32_t data_ov003_0217ac2c;
typedef struct {
    uint32_t vt; uint32_t p4; uint32_t p8; uint32_t lo:8; uint32_t hi:24; uint32_t p10;
    uint32_t w14, w18, w1c, w20, w24, w28;
    uint32_t pad[3]; uint8_t b38; uint8_t pad2[3]; uint32_t w3c;
} S;
void func_ov003_02165a50(S *s, uint32_t a, uint32_t b, uint32_t c, uint32_t x, uint32_t y, uint32_t d, uint32_t e, uint32_t f, uint32_t g) {
    s->w14 = a;
    s->w18 = b;
    s->w20 = d;
    s->w24 = e;
    s->b38 = 1;
    s->w3c = g;
    s->lo = 0;
    s->w28 = f;
    s->vt = (uint32_t)&data_ov003_0217ac2c;
    s->w1c = c;
}
