#include "ffc/types.h"

extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02084ca4(void *dst, void *src, uint32_t n);

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint32_t f12;
} S;

void func_ov006_0219a7b4(S *p, uint32_t a, uint32_t b, int c)
{
    uint32_t start = a;
    uint32_t end = b;
    uint32_t lim;

    if (start < 0x4000) {
        start = 0x4000;
    }
    if (end > 0x8000) {
        end = 0x8000;
    }
    if (start < p->f0) {
        start = p->f0;
    }
    lim = p->f0 + p->f12;
    if (end > lim) {
        end = lim;
    }
    if (start >= end) {
        return;
    }
    if (c != 0) {
        func_02084b2c((void *)(p->f8 + start), 0, end - start);
    } else {
        func_02084ca4((void *)(p->f4 + start), (void *)(p->f8 + start), end - start);
    }
}
