#include "ffc/types.h"

extern void func_0208763c(void);
extern void func_02087678(void *p);
extern void func_0208aaf4(void);
extern void func_0208ae70(uint32_t x);
extern uint32_t func_0208ae80(uint32_t x);
extern uint32_t data_0213e0cc[];
extern int32_t data_0213e0b8[];

void func_020577e0(void)
{
    struct {
        void *p;
        volatile uint8_t f;
    } s;
    int32_t n;

    s.p = data_0213e0cc;
    s.f = 1;
    if (s.f != 0) {
        func_0208763c();
    }
    n = data_0213e0b8[2] - 1;
    data_0213e0b8[2] = n;
    if (n > 0) {
        if (s.f != 0) {
            func_02087678(s.p);
        }
        return;
    }
    do {
        func_0208aaf4();
        func_0208ae70(4);
    } while (func_0208ae80(4) != 0);
    if (s.f != 0) {
        func_02087678(s.p);
    }
}
