#include "ffc/types.h"

extern void func_0209d02c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_0203c40c(void);

uint8_t *func_02033e8c(uint8_t *p)
{
    func_0209d02c(p + 0x14, 2, 8, (void *)func_0203c40c);
    return p;
}
