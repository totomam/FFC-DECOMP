#include "ffc/types.h"

extern uint8_t data_020b93e0[];
extern void func_0208763c(void *p);
extern void func_02007bfc(void *a, void *b);
extern void func_02087678(void *p);

void func_02021344(void *a, void *b)
{
    struct {
        void *p;
        volatile uint8_t f;
    } s;

    s.p = data_020b93e0;
    s.f = 1;
    if (s.f != 0) {
        func_0208763c(data_020b93e0);
    }
    func_02007bfc(a, b);
    if (s.f != 0) {
        func_02087678(s.p);
    }
}
