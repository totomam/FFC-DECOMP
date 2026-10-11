#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern int32_t func_0209a76c(int32_t a, int32_t b);
extern void func_02090398(void *dst, void *src, uint32_t n);

typedef struct {
    uint8_t *base;
    int32_t count;
} Arr;

void *func_0200b4e8(Arr *p, uint8_t *x)
{
    int32_t n;
    func_020059cc(x);
    n = func_0209a76c((int32_t)(p->base + p->count * 12 - x), 12);
    func_02090398(x, x + 12, (uint32_t)((n - 1) * 12));
    p->count--;
    return x;
}
