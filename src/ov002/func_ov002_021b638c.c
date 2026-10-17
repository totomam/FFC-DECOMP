#include "ffc/types.h"

extern void func_ov002_021b5e88(void *a, uint32_t b);

void func_ov002_021b638c(void *a, uint8_t *b)
{
    func_ov002_021b5e88(a, *(uint32_t *)(b + 0xa4));
}
