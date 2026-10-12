#include "ffc/types.h"

extern uint32_t data_0213df68[];
extern uint8_t data_0213dfac[];
extern void func_0208763c(void);
extern uint32_t func_0207fe1c(uint32_t a, uint32_t b);
extern uint32_t func_02056830(void);
extern void func_02087678(uint8_t *p);

void func_02051980(void)
{
    struct {
        uint8_t *p;
        volatile uint8_t f;
    } s;
    uint32_t r4;

    if (data_0213df68[4] == 0) {
        s.p = data_0213dfac;
        s.f = 1;
        if (s.f) {
            func_0208763c();
        }
        r4 = func_0207fe1c(0, 0);
        data_0213df68[4] = func_02056830();
        func_0207fe1c(data_0213df68[4], r4);
        if (s.f) {
            func_02087678(s.p);
        }
    }
}
