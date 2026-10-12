#include "ffc/types.h"

extern uint32_t func_0208cbe0(uint32_t a, uint32_t b, uint32_t c, uint32_t d);
extern void func_0208cdd8(uint32_t a, uint32_t b);
extern void func_0208d2ac(void);
extern uint32_t *func_0208ceec(void);
extern uint32_t func_0208ce30(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f);

uint32_t func_0208d888(uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3)
{
    uint32_t r;
    uint32_t *p;

    r = func_0208cbe0(a0, a2, a2, a3);
    if (r != 0) {
        return r;
    }
    func_0208cdd8(0, a1);
    func_0208d2ac();
    p = func_0208ceec();
    r = func_0208ce30(0, 4, p[0], p[1], p[4], a3);
    if (r != 0) {
        return r;
    }
    return 2;
}
