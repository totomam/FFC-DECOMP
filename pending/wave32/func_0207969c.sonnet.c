#include "ffc/types.h"

typedef struct {
    uint8_t *ptr;
    int8_t cnt;
    uint8_t cur;
} BitReader;

extern uint32_t func_0207969c(BitReader *s, int n);

uint32_t func_0207969c(BitReader *s, int n) {
    uint32_t v = s->cur;
    if (s->cnt < n) {
        int d = n - s->cnt;
        v <<= d;
        s->cur = *s->ptr++;
        s->cnt = 8;
        v |= func_0207969c(s, d);
    } else {
        int e = s->cnt - n;
        v >>= e;
        s->cnt = e;
    }
    return v & (0xff >> (8 - n));
}
