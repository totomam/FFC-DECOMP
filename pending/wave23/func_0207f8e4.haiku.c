#include "ffc/types.h"

extern int func_0207f6bc(void *p, uint32_t a, uint32_t b, uint32_t *out, int flag);
extern void func_0207f5a0(void *p, uint32_t a, uint32_t v, uint32_t c);

void func_0207f8e4(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t v = 0;
    if (func_0207f6bc(p, b, c, &v, 1) == 0) {
        func_0207f5a0(p, a, v, 0);
    }
}
