#include "ffc/types.h"

extern void *func_02023ecc(void *p);
extern int32_t func_0202b510(void *p, int32_t a, int32_t b);
extern int64_t func_0209a71c(int64_t first, int64_t second);
extern void func_02023e9c(void *p, void *q);

typedef struct {
    uint32_t a;
    int32_t b;
    uint32_t c;
} S12;

void func_0202c42c(uint8_t *self, int32_t idx)
{
    void **arr = (void **)(self + 0x19c);
    int32_t *arr2 = (int32_t *)(self + 0x21c);
    S12 local;
    S12 *src;
    int32_t diff;
    int32_t x;
    int64_t s;
    uint32_t r;

    src = (S12 *)func_02023ecc(arr[idx]);
    local = *src;
    diff = *(int32_t *)(self + 0x14) - arr2[idx];
    x = func_0202b510(self, 9, diff);
    s = func_0209a71c((int64_t)(x / 64), (int64_t)((diff * diff) / 2));
    r = (uint32_t)((s + 0x800) >> 12);
    local.b = local.b - (int32_t)r;
    func_02023e9c(arr[idx], &local);
}
