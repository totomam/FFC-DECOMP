#include "ffc/types.h"

extern uint32_t func_02079d10(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern uint32_t func_02079e1c(uint32_t a, uint32_t b);
extern uint32_t func_0207af5c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *e);
extern void func_02079d78(uint32_t a);
extern void func_02079d80(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_02079a8c(uint32_t a, uint32_t b);
extern void func_02079abc(uint32_t a, uint32_t b);
extern void func_02079b54(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_0207b60c(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t *e, uint8_t *f, uint32_t g, uint32_t h)
{
    uint32_t local;
    uint32_t r6 = func_02079d10(a, b, d, d);
    uint32_t r2;

    if (r6 == 0) {
        return 0;
    }
    r2 = func_02079e1c(b, r6);
    if (func_0207af5c(c, 6, r2, 0, &local) != 0) {
        func_02079d78(r6);
        return 0;
    }
    func_02079d80(r6, (uint32_t)(f + *(uint32_t *)(f + 0x18)), *e, local);
    func_02079a8c(a, ((uint8_t *)e)[6]);
    func_02079abc(a, ((uint8_t *)e)[7]);
    func_02079b54(a, g, h);
    return 1;
}
