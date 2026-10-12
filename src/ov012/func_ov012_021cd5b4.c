#include "ffc/types.h"
extern void func_02069694(void *self, void *obj, int n);
extern void func_02069670(void *self, void *obj, int n, uint32_t val);
void func_ov012_021cd5b4(uint8_t *p)
{
    int x = p[0x107];
    uint8_t r4 = x % 4;
    func_02069694(p, *(void **)(p + 0xbc), 4);
    func_02069694(p, *(void **)(p + 0xbc), 2);
    func_02069670(p, *(void **)(p + 0xbc), 4, ((uint32_t *)*(void **)(p + 0xc8))[(uint8_t)(r4 + 4)]);
    func_02069670(p, *(void **)(p + 0xbc), 2, ((uint32_t *)*(void **)(p + 0xc8))[r4]);
}
