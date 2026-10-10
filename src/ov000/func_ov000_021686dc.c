#include "ffc/types.h"

extern void *func_ov000_0216876c(void *a, uint32_t c);
extern void func_02090380(void *destination, const void *source, uint32_t length);

void func_ov000_021686dc(void *a, const void *b, uint32_t c)
{
    uint8_t *p = (uint8_t *)a;
    void *dst = func_ov000_0216876c(a, c);
    func_02090380(dst, b, *(uint32_t *)(p + 8));
}
