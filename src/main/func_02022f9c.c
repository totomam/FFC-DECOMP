#include "ffc/types.h"

extern void func_02090380(void *destination, const void *source, uint32_t length);
extern void func_02081ec0(void *p);

void func_02022f9c(uint8_t *base, void *src)
{
    func_02090380(base + 0x1E4, src, 0x20);
    func_02081ec0(src);
}
