#include "ffc/types.h"
typedef struct { uint32_t v[2]; } S8;
typedef struct { uint32_t v[4]; } S16;
typedef struct {
    uint32_t w0; uint8_t b4; uint8_t pad[3];
    S8 m;
    uint16_t h[9]; uint16_t pad2;
    uint32_t w24, w28, w2c;
    S16 t;
} E;
void func_0201f7fc(uint8_t *a, uint32_t idx, E *out)
{
    E *e = (E *)(*(uint8_t **)(a + 0x90) + (idx << 6));
    uint32_t i;
    uint16_t *s, *d;
    out->w0 = e->w0;
    out->b4 = e->b4;
    *(uint64_t*)&out->m = *(uint64_t*)&e->m;
    i = 9; d = out->h; s = e->h;
    do { *d++ = *s++; } while (--i);
    out->w24 = e->w24;
    out->w28 = e->w28;
    out->w2c = e->w2c;
    out->t = e->t;
}
