#include "ffc/types.h"

extern uint8_t data_020ae6a8[];
extern void func_02091a24(void *p);
extern uint32_t func_0208f42c(void);

typedef struct {
    uint32_t flag : 1;
    uint32_t pad : 31;
    uint32_t a;
    uint32_t b;
} S;

uint32_t func_02039554(S *s, uint32_t x) {
    uint32_t f;
    uint32_t lim;
    uint32_t base;

    if (s->flag) {
        f = 0;
    } else {
        f = 1;
    }
    if (f) {
        lim = ((uint32_t)(((uint8_t *)s)[0] << 24)) >> 25;
    } else {
        lim = s->a;
    }
    if (x >= lim) {
        func_02091a24(data_020ae6a8);
        func_0208f42c();
    }
    if (f) {
        base = (uint32_t)s + 1;
    } else {
        base = s->b;
    }
    return base + x;
}
