#include "ffc/types.h"

extern void func_0208763c(void *p, uint32_t v);
extern void func_02087678(void *p);

void func_0202ec48(uint8_t *p, uint32_t v)
{
    func_0208763c(p + 0x4d0, v);
    *(uint32_t *)(p + 0x47c) = v;
    func_02087678(p + 0x4d0);
}
