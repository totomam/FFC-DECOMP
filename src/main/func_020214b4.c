#include "ffc/types.h"
extern uint32_t data_020b93e0[];
extern uint32_t data_020b93d4[];
extern void func_0208763c(void *);
extern void func_02007c1c(void);
extern void func_02087678(void *);
void func_020214b4(void)
{
    volatile struct { void *p; uint8_t f; } g;
    uint32_t n;
    g.p = data_020b93e0;
    g.f = 1;
    if (g.f) func_0208763c(data_020b93e0);
    n = data_020b93d4[1];
    data_020b93d4[1] = n + 1;
    if (n == 0) func_02007c1c();
    if (g.f) func_02087678(g.p);
}
