#include "ffc/types.h"
extern void func_02069694(void *self, void *obj, int n);
extern void func_02069670(void *self, void *obj, int n, uint32_t val);
void func_ov008_021a320c(uint8_t *p)
{
    int x = p[0x126];
    uint8_t r4 = x % 4;
    func_02069694(p, *(void **)(p + 0xd0), 4);
    func_02069694(p, *(void **)(p + 0xd0), 2);
    func_02069670(p, *(void **)(p + 0xd0), 4, ((uint32_t *)*(void **)(p + 0xd8))[(uint8_t)(r4 + 4)]);
    func_02069670(p, *(void **)(p + 0xd0), 2, ((uint32_t *)*(void **)(p + 0xd8))[r4]);
}
