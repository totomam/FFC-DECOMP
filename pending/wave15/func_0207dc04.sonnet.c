/* cflags: -nothumb */
#include "ffc/types.h"
typedef struct { uint32_t v[4]; } Blk16;
typedef struct { uint32_t v[2]; } Blk8;
typedef struct { Blk16 q; Blk8 t; uint16_t h0; uint16_t h1; } Src;
void func_0207dc04(Src *s) {
    *(Blk16 *)0x04000290 = s->q;
    *(uint16_t *)0x04000280 = s->h0;
    *(uint16_t *)0x040002b0 = s->h1;
    *(Blk8 *)0x040002b8 = s->t;
}
