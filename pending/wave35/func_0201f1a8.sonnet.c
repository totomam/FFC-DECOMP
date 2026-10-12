#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
typedef struct {
    uint32_t pad0;
    uint16_t h[0x15];
    uint16_t pad1;
    uint32_t w;
    uint8_t c[0x14];
    P p[2];
} E;
typedef struct { uint8_t pad[0x54]; E *arr; } A;

void func_0201f1a8(A *a, int32_t idx, E *b) {
    E *dst = &a->arr[idx];
    uint16_t *s = b->h, *d = dst->h;
    uint8_t *s8, *d8;
    uint32_t n;
    for (n = 0x15; n != 0; n--) *d++ = *s++;
    dst->w = b->w;
    s8 = b->c; d8 = dst->c;
    for (n = 0x14; n != 0; n--) *d8++ = *s8++;
    dst->p[0] = b->p[0];
    dst->p[1] = b->p[1];
}
