#include "ffc/types.h"
extern void func_0208763c(void);
extern void func_02007c24(void);
extern void func_02087678(uint32_t);
extern uint8_t data_020b93e0[];
extern int data_020b93d4[];
typedef struct { uint32_t p; volatile uint8_t f; } S;
void func_020214f8(void) {
    S s;
    s.p = (uint32_t)data_020b93e0;
    s.f = 1;
    if (s.f) func_0208763c();
    if (--data_020b93d4[1] == 0) func_02007c24();
    if (s.f) func_02087678(s.p);
}
