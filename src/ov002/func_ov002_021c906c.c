#include "ffc/types.h"

extern void func_0209d02c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_ov002_021c9130(void);

uint8_t *func_ov002_021c906c(uint8_t *p)
{
    func_0209d02c(p + 0x10, 3, 8, (void *)func_ov002_021c9130);
    return p;
}
