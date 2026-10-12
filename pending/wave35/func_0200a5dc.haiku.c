#include "ffc/types.h"

extern void func_0200a690(void *dst, uint32_t v);
extern void func_0200a82c(void *dst, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint8_t e);

typedef struct {
    uint32_t a;
    uint32_t b;
    uint32_t c;
} Blk;

void *func_0200a5dc(void *dst, void *src)
{
    Blk *d = (Blk *)dst;
    Blk *s = (Blk *)src;
    uint32_t sum;
    volatile uint8_t arr[8];
    int k;

    if (!(s->a & 1)) {
        *d = *s;
    } else {
        for (k = 0; k < 3; k++) {
            ((uint32_t *)dst)[k] = 0;
        }
        func_0200a690(dst, s->b);
        sum = s->c + (s->b << 1);
        arr[0] = arr[4];
        func_0200a82c(dst, 0, 0, s->c, sum, (uint8_t)arr[0]);
    }
    return dst;
}
