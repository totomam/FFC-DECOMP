#include "ffc/types.h"

extern int func_0207f6bc(void *a, uint32_t c, uint32_t d, uint32_t *out, uint32_t zero);
extern int func_0207f734(void *a, void *b, uint32_t val, uint32_t e);

void func_0207f83c(void *a, void *b, uint32_t c, uint32_t d, uint32_t e)
{
    uint32_t tmp;
    if (func_0207f6bc(a, c, d, &tmp, 0) == 0) {
        func_0207f734(a, b, tmp, e);
    }
}
