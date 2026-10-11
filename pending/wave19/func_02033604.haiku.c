#include "ffc/types.h"

extern void func_0200b65c(void *p, uint32_t v);

void func_02033604(uint8_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    func_0200b65c(p + 0x98, a);
    func_0200b65c(p + 0x8c, b);
    func_0200b65c(p + 0xa4, c);
}
