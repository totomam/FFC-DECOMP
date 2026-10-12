#include "ffc/types.h"

extern uint64_t func_02092b44(uint32_t mask, void *fn, int32_t *p, int32_t *q, int32_t *r);
extern void func_0209270c(void);
extern uint64_t func_02096bac(uint64_t value);
extern uint32_t data_02144c00;

uint64_t func_020934c8(int32_t a, int32_t *out) {
    int32_t w[4];
    uint64_t v;

    w[1] = 0;
    w[0] = a;
    v = func_02092b44(0x7fffffff, (void *)func_0209270c, &w[0], &w[3], &w[2]);
    if (out != 0) {
        *out = a + w[3];
    }
    func_02096bac(v);
    if (w[2] != 0) {
        data_02144c00 = 0x22;
    }
    return v;
}
