#include "ffc/types.h"

extern void func_ov002_021a13ec(void *a, uint32_t b);

void func_ov002_021aa2c4(void *a, uint8_t *b)
{
    func_ov002_021a13ec(a, *(uint32_t *)(b + 0xbc));
}
