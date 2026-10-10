/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t v[4]; } Blk16;
typedef struct { uint32_t v[2]; } Blk8;

typedef struct {
    Blk16 q;
    Blk8 t;
    uint16_t h0;
    uint16_t h1;
} Src;

void func_0207dc04(Src *s) {
    Blk16 *d = (Blk16 *)0x04000290;
    uint16_t *hw = (uint16_t *)d;
    hw[-8] = s->h0;
    hw[16] = s->h1;
    *d = *(Blk16 *)s;
    d = (Blk16 *)((Blk8 *)d + 5);
    s = (Src *)((Blk8 *)s + 2);
    *(Blk8 *)d = *(Blk8 *)s;
}
