#include "ffc/types.h"
typedef struct { uint32_t x, y; } P;
typedef struct { uint32_t a, b, c, d; } V;
typedef struct { uint8_t pad[0x6c]; uint32_t f[4]; } G;
extern G data_ov004_02159744;
static inline P addp(uint32_t x, uint32_t y, uint32_t k) { P r; r.x = x + k; r.y = y; return r; }
void func_ov004_021534b0(V *out, int x, int n) {
    if (n >= 2) n++;
    G *s = &data_ov004_02159744;
    uint32_t s0=s->f[0], s1=s->f[1], s2=s->f[2];
    out->a = s0; out->b = s1; out->c = s2;
    uint32_t s3 = s->f[3];
    P a2, b2, a, b;
    a = addp(s0,s1, n * 0x34);
    a2 = a;
    out->a = a2.x; out->b = a2.y;
    b = addp(s2,s3, n * 0x34);
    b2 = b;
    out->c = b2.x; out->d = b2.y;
}
