#include "ffc/types.h"

extern int32_t func_02093b30(void *obj, int32_t v);

typedef struct {
    uint32_t st : 3;
    uint32_t rest : 29;
} Hdr;

typedef struct {
    uint8_t pad0[8];
    Hdr h;
    uint8_t c;
    uint8_t pad3[5];
    uint8_t buf[0x28 - 0x12];
    uint32_t f28;
    uint8_t pad2[4];
    uint32_t f30;
} Obj;

int32_t func_0208f8a4(int32_t a, Obj *o)
{
    int32_t st = o->h.st;
    int32_t m = ~0;
    Hdr h;
    if (func_02093b30(o, m) >= 0) {
        return m;
    }
    if (st == 1 || st == 4 || a == m) {
        return -1;
    }
    if (st < 3) {
        o->f30 = o->f28;
        o->f28 = 0;
        h = o->h;
        h.st = 3;
    } else {
        h = o->h;
        h.st = h.st + 1;
    }
    o->h = h;
    o->buf[h.st - 3] = a;
    o->c = 0;
    return (uint8_t)a;
}
