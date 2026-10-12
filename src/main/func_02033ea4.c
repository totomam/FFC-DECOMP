#include "ffc/types.h"

typedef struct {
    uint16_t v[4];
} V4;

extern void func_02033e58(uint32_t *out, uint32_t *a, uint32_t *b);
extern void func_0203c454(V4 *out, void *a, void *b);
extern void func_0203c40c(V4 *p);

void func_02033ea4(uint32_t *out, uint32_t *a, uint32_t *b) {
    V4 t1;
    V4 t2;
    uint16_t *o16;

    func_02033e58(out, a, b);
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
    out[3] = a[3] + b[3];
    out[4] = a[4] + b[4];

    func_0203c454(&t1, (uint8_t *)a + 0x14, (uint8_t *)b + 0x14);
    o16 = (uint16_t *)out;
    o16[10] = t1.v[0];
    o16[11] = t1.v[1];
    o16[12] = t1.v[2];
    o16[13] = t1.v[3];
    func_0203c40c(&t1);

    func_0203c454(&t2, (uint8_t *)a + 0x1c, (uint8_t *)b + 0x1c);
    o16[14] = t2.v[0];
    o16[15] = t2.v[1];
    o16[16] = t2.v[2];
    o16[17] = t2.v[3];
    func_0203c40c(&t2);
}
