#include "ffc/types.h"

extern void func_0202b240(void *a, void *b);

void func_ov003_0215c2ec(void *p, uint32_t a, uint32_t b, uint32_t c)
{
    *(uint32_t *)((uint8_t *)p + 0xb4) = a;
    *(uint32_t *)((uint8_t *)p + 0xb8) = b;
    *(uint32_t *)((uint8_t *)p + 0xbc) = c;
    func_0202b240(*(void **)((uint8_t *)p + 0xa0), (uint8_t *)p + 0xb4);
}
