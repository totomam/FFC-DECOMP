#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02007c1c(void);
extern void func_02087678(void *p);
extern uint8_t data_020b93e0[];
extern uint32_t data_020b93d4[];

typedef struct {
    void *p;
    volatile uint8_t f;
} Local;

void func_020214b4(void)
{
    Local l;
    uint32_t n;

    Local *q = &l;
    l.p = data_020b93e0;
    q->f = 1;
    if (l.f != 0) {
        func_0208763c();
    }
    n = data_020b93d4[1];
    data_020b93d4[1] = n + 1;
    if (n == 0) {
        func_02007c1c();
    }
    if (l.f != 0) {
        func_02087678(l.p);
    }
}
