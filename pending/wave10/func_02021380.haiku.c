#include "ffc/types.h"

extern uint32_t data_020b93e0;
extern void func_0208763c(void);
extern void func_02007c2c(void *p);
extern void func_02087678(void *p);

void func_02021380(void *r0)
{
    struct {
        void *p;
        volatile uint8_t f;
    } s;

    s.p = &data_020b93e0;
    s.f = 1;
    if (s.f != 0) {
        func_0208763c();
    }
    func_02007c2c(r0);
    if (s.f != 0) {
        func_02087678(s.p);
    }
}
