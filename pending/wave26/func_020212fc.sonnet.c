#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02007bf4(void *a, void *b, uint32_t c);
extern void func_02087678(void *p);
extern uint8_t data_020b93e0[];

void func_020212fc(void *a, void *b) {
    volatile struct { void *p; uint8_t f; } s;
    s.p = data_020b93e0;
    s.f = 1;
    if (s.f) {
        func_0208763c();
    }
    func_02007bf4(a, b, 0);
    if (s.f) {
        func_02087678(s.p);
    }
}
