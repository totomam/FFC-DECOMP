#include "ffc/types.h"

typedef struct {
    uint32_t flag : 1;
    uint32_t pad : 31;
    uint32_t w1;
    uint32_t w2;
} S;

typedef struct { uint8_t v; } B;

extern void func_020059e4(void *p, uint32_t v);
extern void func_02005af4(void *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, B e);

void *func_020095b8(void *dst, S *src)
{
    uint32_t i;
    B c;
    uint32_t sum;

    if (!src->flag) {
        *(S *)dst = *src;
    } else {
        for (i = 0; i < 3; i++) {
            ((uint32_t *)dst)[i] = 0;
        }
        func_020059e4(dst, src->w1);
        sum = src->w2 + src->w1;
        func_02005af4(dst, 0, 0, src->w2, sum, c);
    }
    return dst;
}
