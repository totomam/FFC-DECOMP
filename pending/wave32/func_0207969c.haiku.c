#include "ffc/types.h"

typedef struct {
    uint8_t *ptr;
    int8_t cnt;
    uint8_t cur;
} BitReader;

extern uint32_t func_0207969c(BitReader *s, int n);

uint32_t func_0207969c(BitReader *s, int n) {
    int cnt = s->cnt;
    uint32_t cur = s->cur;
    uint32_t v;
    if (cnt < n) {
        uint8_t *p = s->ptr;
        s->ptr = p + 1;
        v = cur << (n - cnt);
        s->cur = *p;
        s->cnt = 8;
        v |= func_0207969c(s, n - cnt);
    } else {
        v = cur >> (cnt - n);
        s->cnt = cnt - n;
    }
    return v & ((int)0xff >> (8 - n));
}
