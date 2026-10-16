#include "ffc/types.h"
typedef struct { uint16_t a, b, c, d; } R;
extern int func_ov006_021b4d94(R *r);
int func_ov006_021b4eb4(uint16_t *p) {
    R r;
    uint16_t x, y, w;
    if ((*(volatile uint16_t *)0x2ffffa8 & 0x8000) >> 15) return 0;
    x = p[0]; w = p[2]; y = p[1];
    r.a = x;
    r.b = y;
    r.c = (uint16_t)(x + w);
    r.d = (uint16_t)(y + p[3]);
    return func_ov006_021b4d94(&r);
}
