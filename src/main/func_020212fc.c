#include "ffc/types.h"
extern uint32_t data_020b93e0;
extern void func_0208763c(uint32_t *p);
extern void func_02007bf4(uint32_t a, uint32_t b, uint32_t c);
extern void func_02087678(uint32_t p);
typedef struct { uint32_t p; volatile uint8_t f; } S;
void func_020212fc(uint32_t a, uint32_t b) {
    S s;
    s.p = (uint32_t)&data_020b93e0;
    s.f = 1;
    if (s.f) func_0208763c((uint32_t*)s.p);
    func_02007bf4(a, b, 0);
    if (s.f) func_02087678(s.p);
}
