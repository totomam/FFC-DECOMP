#include "ffc/types.h"

extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov000_0214f204(uint32_t *p, int n, uint64_t s);

void func_ov006_0219ef8c(int a, uint32_t *p, int b, int c, int32_t *q)
{
    uint32_t local[2];
    uint64_t sum = 0;
    local[0] = p[0];
    local[1] = p[1];
    sum += func_0209a71c((uint64_t)(int64_t)q[0], 0x1ff6210ULL) >> 6;
    sum += func_0209a71c((uint64_t)(int64_t)q[1], 0x1ff6210ULL) >> 6;
    func_ov000_0214f204(local, 1, sum);
}
