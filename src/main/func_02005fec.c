#include "ffc/types.h"

extern int32_t func_0209a76c(int32_t a, int32_t b);

typedef struct {
    uint8_t a;
    uint8_t b;
    uint8_t pad[2];
    int32_t base;
    int32_t limit;
    int32_t out;
    int32_t max;
    int32_t cnt;
} S;

void func_02005fec(S *p) {
    if (p->a == 0 && p->b == 0) {
        int32_t base = p->base;
        p->cnt = p->cnt + 1;
        p->out = base + func_0209a76c((p->limit - base) * p->cnt, p->max);
        if (p->cnt >= p->max) {
            p->a = 1;
        }
    }
}
