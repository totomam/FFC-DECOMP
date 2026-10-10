#include "ffc/types.h"

extern void func_020695d0(void);

void *func_ov007_021b934c(uint8_t *p)
{
    uint8_t v = *(uint8_t *)(p + 0xf4);
    *(uint32_t *)(*(uint32_t **)(p + 0xe0)) = v;
    func_020695d0();
    return p;
}
