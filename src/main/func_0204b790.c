#include "ffc/types.h"

extern void func_0204aba4(int32_t a, uint8_t *b, int32_t c, int32_t d, int32_t e, int32_t f);

void func_0204b790(int32_t a, uint8_t *b, int32_t c, int32_t d, int32_t e)
{
    int32_t *p = *(int32_t **)(b + 0x2c);
    int32_t x = p[0x1c / 4] - d;
    func_0204aba4(a, b, c, p[0x28 / 4] + d, x, e);
}
