#include "ffc/types.h"

typedef struct {
    uint32_t a;
    uint32_t b;
} S;

extern uint32_t func_02093528(uint32_t v, uint32_t max, void (*cb)(void), S *s, uint32_t *o1, uint32_t *o2, uint32_t *o3);
extern void func_0209270c(void);
extern uint32_t data_02144c00;

uint32_t func_020937a4(uint32_t a, uint32_t *out, uint32_t b)
{
    uint32_t x1;
    uint32_t x2;
    uint32_t x3;
    uint32_t r;
    S s;

    s.a = a;
    s.b = 0;
    r = func_02093528(b, 0x7fffffff, func_0209270c, &s, &x1, &x2, &x3);
    if (out != 0) {
        *out = a + x1;
    }
    if (x3 == 0) {
        if (x2 == 0) {
            if (r <= 0x7fffffffu) {
                return r;
            }
        } else if (r <= 0x40000000u) {
            return -r;
        }
    }
    data_02144c00 = 0x22;
    return x2 != 0 ? 0x40000000u : 0x7fffffffu;
}
