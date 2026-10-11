#include "ffc/types.h"

extern int32_t func_ov000_02165588(void *p);
extern void *func_ov000_0214ee74(void *p);

typedef struct {
    uint8_t pad0;
    uint8_t b1;
    uint16_t h2;
    uint32_t w4;
} Out;

int func_ov000_02164c8c(void *p, uint32_t x, Out *o)
{
    int32_t v = (int32_t)(uint16_t)x;
    uint32_t hi = (uint32_t)(v >> 8) & 0xff;
    uint32_t lo = (uint32_t)(v << 8) & 0xff00;

    o->b1 = 2;
    o->h2 = (uint16_t)(hi | lo);
    o->w4 = func_ov000_02165588(p);
    if (o->w4 == (uint32_t)-1) {
        void *q = func_ov000_0214ee74(p);
        if (q == 0) {
            return 0;
        }
        {
            uint32_t *t = *(uint32_t **)((uint8_t *)q + 12);
            uint32_t *t2 = (uint32_t *)*t;
            o->w4 = *t2;
        }
    }
    return 1;
}
