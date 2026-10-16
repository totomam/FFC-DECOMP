#include "ffc/types.h"
extern void func_020695d0(void *p);
extern void func_02056844(void *p);
void *func_ov007_021b9368(uint8_t *p)
{
    **(uint32_t **)(p + 0xe0) = *(p + 0xf4);
    func_020695d0(p);
    func_02056844(p);
    return p;
}
