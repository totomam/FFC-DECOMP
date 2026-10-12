#include "ffc/types.h"
extern void func_02069694(void *self, void *obj, int n);
extern void func_02069670(void *self, void *obj, int n, uint32_t val);
void func_ov008_0219b628(uint8_t *p)
{
    int x = p[0x112];
    uint8_t r4 = x % 4;
    func_02069694(p, *(void **)(p + 0xc4), 4);
    func_02069694(p, *(void **)(p + 0xc4), 2);
    func_02069670(p, *(void **)(p + 0xc4), 4, ((uint32_t *)*(void **)(p + 0xcc))[(uint8_t)(r4 + 4)]);
    func_02069670(p, *(void **)(p + 0xc4), 2, ((uint32_t *)*(void **)(p + 0xcc))[r4]);
}
