#include "ffc/types.h"

extern void func_0207b2cc(uint8_t *p, uint32_t a, uint32_t b);
extern void func_02089d74(uint8_t *p, uint8_t *q);

void func_0207b308(uint8_t *p, uint32_t off, uint32_t a, uint32_t b)
{
    func_0207b2cc(p, a, b);
    func_02089d74(p, p + off);
}
