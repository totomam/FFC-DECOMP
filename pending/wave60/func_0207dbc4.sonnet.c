/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t a, b, c, d; } Q;
typedef struct { uint32_t a, b; } P;
typedef struct { Q q; P p; uint16_t x; uint16_t y; } O;
void func_0207dbc4(O *o) {
    o->q = *(volatile Q*)0x04000290;
    o->p = *(volatile P*)0x040002B8;
    o->x = *(volatile uint16_t*)0x04000280 & 3;
    o->y = *(volatile uint16_t*)0x040002B0 & 1;
}
