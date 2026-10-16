#include "ffc/types.h"
typedef struct { uint32_t a; uint32_t b; uint32_t c; } E;
typedef struct { uint8_t z; } Z;
extern void func_ov009_021a90c0(E *p, uint32_t x, uint32_t y, Z z);
static inline void h(E *d, E *s) {
    if (d == s) return;
    Z z; z.z = 0;
    func_ov009_021a90c0(d, s->a, s->a + s->b * 4, z);
}
#define A(o) ((E *)((uint8_t *)p + 0x184 + (o)))
void func_ov009_021ad3f0(uint8_t *p, uint32_t k) {
    switch (k) {
    case 0: h(A(0), A(12)); break;
    case 1: h(A(0), A(24)); break;
    case 2: h(A(0), A(36)); break;
    case 3: h(A(0), A(48)); break;
    case 4: h(A(0), A(60)); break;
    }
}
