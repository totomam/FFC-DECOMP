#include "ffc/types.h"

extern void func_02087024(uint8_t *p);
extern void func_0208763c(uint8_t *p);
extern uint32_t func_0207beb4(uint8_t *p);
extern void func_02087678(uint8_t *p);
extern void func_0207c174(void);
extern void func_0207bf14(uint32_t v);

uint32_t func_0207c894(uint8_t *p)
{
    uint32_t base = 0x10c8;
    uint32_t off2 = base;
    uint32_t r;
    volatile uint32_t v;
    v = base;
    off2 += 0x18;
    v = base - 8;
    for (;;) {
        func_02087024(p + v);
        for (;;) {
            func_0208763c(p + base);
            r = func_0207beb4(p + off2);
            if (r == 0) {
                func_02087678(p + base);
                break;
            }
            func_0207c174();
            func_0207bf14(r);
            func_02087678(p + base);
        }
    }
}
