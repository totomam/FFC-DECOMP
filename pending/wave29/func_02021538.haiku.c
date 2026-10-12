#include "ffc/types.h"

extern uint8_t data_020b93e0[];
extern void func_0208763c(void *p);
extern void func_02007c44(int a, int b, int c, int d);
extern void func_02087678(void *p);

typedef struct {
    void *p;
    volatile uint8_t f;
} Guard;

void func_02021538(int a, int b, int c, int d)
{
    Guard g;
    g.p = data_020b93e0;
    g.f = 1;
    if (g.f) {
        func_0208763c(g.p);
    }
    func_02007c44(a, b, c, d);
    if (g.f) {
        func_02087678(g.p);
    }
}
