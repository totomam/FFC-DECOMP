#include "ffc/types.h"

extern void func_0209d02c(void *a, uint32_t b, uint32_t c, void *d);
extern void func_0200ee84(void);

uint8_t *func_02013ba4(uint8_t *p)
{
    func_0209d02c(p + 0x20, 12, 12, (void *)func_0200ee84);
    return p;
}
