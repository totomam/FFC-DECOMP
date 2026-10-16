#include "ffc/types.h"
extern int32_t func_0208f694(int32_t value);
extern char data_020b0c1c[];
typedef struct S { void *vt; int32_t p1[2]; uint32_t f0c; uint8_t pad[3]; uint8_t b13, b14, b15; uint8_t pad2[6]; int32_t f1c; int32_t pad3; int32_t f24; int32_t pad4; int32_t f2c, f30, pad5, f38, f3c, f40; } S;
S *func_02057148(S *s, int32_t a, int32_t b) {
    int32_t m1, one, z;
    s->f0c &= ~0xff;
    z = 0;
    m1 = z - 1;
    one = 1;
    s->f1c = m1;
    s->f24 = m1;
    s->b13 = z;
    s->vt = data_020b0c1c;
    s->b14 = z;
    s->b15 = z;
    s->f2c = one;
    s->f30 = z;
    s->f38 = a;
    s->f3c = b;
    s->f1c = func_0208f694(a - b) + 1;
    s->f40 = (a < b) ? one : m1;
    return s;
}
