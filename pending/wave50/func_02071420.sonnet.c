#include "ffc/types.h"

typedef struct {
    uint8_t *base;
    int32_t count;
} Vec16;

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
} Blk16;

typedef struct {
    uint8_t x;
} B1;

extern void func_020717dc(Vec16 *v, int32_t n, B1 z);

void func_02071420(Vec16 *v, uint8_t *begin, uint8_t *end)
{
    int32_t n = (end - begin) / 16;
    if (n == 0) return;
    {
        uint8_t arr[2]; B1 *p = (B1*)(arr+1); B1 s;
        p->x = 0; s = *p;
        func_020717dc(v, n, s);
    }
    {
        uint8_t *dst = v->base + (v->count << 4);
        if (begin != end) {
            do {
                if (dst != 0) {
                    *(Blk16 *)dst = *(Blk16 *)begin;
                }
                {
                    int32_t c = v->count;
                    begin += 16;
                    c = c + 1;
                    dst += 16;
                    v->count = c;
                }
            } while (begin != end);
        }
    }
}
