#include "ffc/types.h"

extern void *func_020059cc(void *object);
extern void func_0206927c(void *object);
extern void func_02056844(void *object);

void *func_ov007_021a6e04(void *p)
{
    uint8_t *s = (uint8_t *)p;

    func_020059cc(s + 0xbc);
    func_0206927c(s);
    *(uint32_t *)(s + 0x94) = 0;
    *(uint32_t *)(s + 0x98) = 0;
    *(uint32_t *)(s + 0x9c) = 0;
    func_02056844(s);
    return s;
}
