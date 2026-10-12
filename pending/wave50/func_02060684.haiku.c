#include "ffc/types.h"

typedef struct { uint32_t x, y; } Pair;

extern void *func_0205681c(uint32_t size);
extern void func_02057210(void *obj, Pair p1, Pair p2);
extern char data_020b12dc[];

void *func_02060684(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g, uint32_t h)
{
    uint8_t *r4;
    Pair p2, p1;
    r4 = (uint8_t *)func_0205681c(0x5c);
    if (r4 != 0) {
        p1.x = b;
        p1.y = d;
        p2.x = c;
        p2.y = e;
        func_02057210(r4, p1, p2);
        *(uint32_t *)r4 = (uint32_t)data_020b12dc;
        *(uint32_t *)(r4 + 0x54) = a;
        *(uint32_t *)(r4 + 0x58) = h;
        *(uint32_t *)(r4 + 0x24) = f;
        if (r4[0x15] != 0) {
            if (f == 0) {
                *(uint32_t *)(r4 + 0x1c) = 1;
            } else {
                *(uint32_t *)(r4 + 0x1c) = f << 4;
            }
        }
        *(uint32_t *)(r4 + 0x30) = g;
        {
            uint32_t *p = *(uint32_t **)(r4 + 0x54);
            p[3]++;
        }
    }
    return r4;
}
