/* cflags: -nothumb */
#include "ffc/types.h"

typedef struct { uint32_t a, b, c, d; } Blk16;
typedef struct { uint32_t a, b; } Blk8;

void func_0207dbc4(uint8_t *dst) {
    uint8_t *s = (uint8_t *)0x04000290;
    Blk16 v = *(Blk16 *)s;
    Blk16 *o = (Blk16 *)dst;
    *o = v;
    uint16_t x = *(uint16_t *)(s - 0x10) & 3;
    Blk8 w = *(Blk8 *)(s + 0x28);
    Blk8 *o2 = (Blk8 *)(dst + 16);
    *o2 = w;
    uint16_t y = *(uint16_t *)(s + 0x20) & 1;
    *(uint16_t *)(dst + 24) = x;
    *(uint16_t *)(dst + 26) = y;
}
