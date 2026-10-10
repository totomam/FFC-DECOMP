/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint64_t numer, denom; } ND;
typedef struct { ND nd; uint64_t param; uint16_t divcnt, sqrtcnt; } Out;

void func_0207dbc4(Out *o) {
    ND *s = (ND *)0x04000290;
    uint64_t *q = (uint64_t *)0x040002B8;
    o->nd = *s;
    o->divcnt = *(uint16_t *)0x04000280 & 3;
    o->param = *q;
    o->sqrtcnt = *(uint16_t *)0x040002B0 & 1;
}
