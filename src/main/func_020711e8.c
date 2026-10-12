#include "ffc/types.h"

typedef uint64_t Pair;
typedef struct Elem {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t *fc;
    uint32_t f10;
    uint32_t f14;
    uint32_t f18;
} Elem;

extern Pair func_0209a978(uint32_t x, uint32_t y);
extern int func_020840d8(void *a, int32_t *b, void *c, uint32_t d);
extern int func_02071188(void *p, uint32_t a, void *b);

int func_020711e8(void *p, int idx, void *arg2)
{
    int32_t s = 0x1c;
    Elem *e = *(Elem **)((uint8_t *)p + 0x14) + idx;
    uint32_t *q;
    int32_t m;
    Pair r;

    e->f8 += 1;
    r = func_0209a978(e->f4 + 1, e->f10);
    e->f4 = (uint32_t)(r >> 32);
    q = (uint32_t *)((uint8_t *)e->fc + (e->f4 << 4));
    q[0] = e->f8;

    s = m = s - 0x1d;
    func_020840d8((uint8_t *)p + 0x2c, &m, q, 4);
    func_020840d8((uint8_t *)p + 0x2c, &m, arg2, e->f0);

    q[1] = (uint32_t)~m;

    if (func_02071188(p, q[3], arg2)) {
        if (func_02071188(p, q[2], q)) {
            return 1;
        }
    }
    return 0;
}
