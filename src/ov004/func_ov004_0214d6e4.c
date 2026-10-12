#include "ffc/types.h"

extern char data_ov004_02159438[];
extern void func_02056c9c(void *p, int x);
extern uint32_t func_0209cec8(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

void *func_ov004_0214d6e4(uint32_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f)
{
    int i;

    func_02056c9c(p, 0);
    p[0] = (uint32_t)data_ov004_02159438;
    p[32] = a;
    p[33] = b;
    p[34] = c;
    p[35] = d;
    p[36] = e;
    p[37] = f;
    for (i = 0; i < 2; i++) {
        p[38 + i] = func_0209cec8(p[35] * p[36], 4, 0, 0, 0);
    }
    return p;
}
