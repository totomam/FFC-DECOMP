#include "ffc/types.h"

typedef struct { uint32_t a, b, c; } Triple;

extern void func_0205b838(uint32_t *p, int x);
extern void func_0205c5d4(uint32_t *out, uint32_t *p, uint32_t v);

void func_0205b7e8(uint32_t *p, Triple *q)
{
    uint32_t buf[5];
    uint32_t r2;
    uint32_t *dst;

    if (p[4] == 0) {
        r2 = 0;
    } else {
        r2 = (p[4] - 1) * 0x55;
    }
    if (r2 - (p[0] + p[1]) == 0) {
        func_0205b838(p, 1);
    }
    func_0205c5d4(buf, p, p[1]);
    dst = (uint32_t *)buf[4];
    if (dst != 0) {
        *(Triple *)dst = *q;
    }
    p[1]++;
}
