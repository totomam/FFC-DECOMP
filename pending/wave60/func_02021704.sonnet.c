#include "ffc/types.h"
extern uint8_t data_020b93e0[];
extern void func_0208763c(void);
extern void func_02007bec(void);
extern void func_02087678(void *);
void func_02021704(void) {
    struct { void *p; volatile uint8_t f; } s;
    s.p = data_020b93e0;
    s.f = 1;
    if (s.f) func_0208763c();
    func_02007bec();
    if (s.f) func_02087678(s.p);
}
