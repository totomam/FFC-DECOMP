#include "ffc/types.h"

extern int32_t func_02093b30(void *obj, int32_t v);

typedef struct {
    uint32_t st : 3;
    uint32_t rest : 29;
} Hdr;

typedef struct {
    uint8_t pad0[8];
    Hdr hdr;
    uint8_t pad1[0x28 - 12];
    uint32_t f28;
    uint8_t pad2[4];
    uint32_t f30;
} Obj;

int32_t func_0208f8a4(int32_t a, Obj *o)
{
    int32_t st;
    int32_t m;
    uint32_t w;
    uint32_t s2;
    uint8_t *obj = (uint8_t *)o;

    st = o->hdr.st;
    m = 0;
    m = ~m;
    if (func_02093b30(o, m) >= 0) {
        return m;
    }
    if (st == 1 || st == 4 || a == m) {
        return m;
    }
    if (st < 3) {
        o->f30 = o->f28;
        o->f28 = 0;
        w = *(uint32_t *)(obj + 8);
        w = (w & ~7u) | 3u;
    } else {
        w = *(uint32_t *)(obj + 8);
        s2 = (w << 29) >> 29;
        w = (w & ~7u) | ((s2 + 1) & 7u);
    }
    *(uint32_t *)(obj + 8) = w;
    {
        uint8_t *p = obj + (((w << 29) >> 29) - 3);
        p[0x12] = (uint8_t)a;
    }
    obj[0xc] = 0;
    return (uint8_t)a;
}
