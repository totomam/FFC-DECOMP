#include "ffc/types.h"

extern void func_02069694(uint8_t *self, void *a, int n);
extern void func_02069670(uint8_t *self, void *a, int n, uint32_t v);

void func_ov008_021a6b64(uint8_t *p)
{
    int b = p[0x10c];
    uint8_t r4 = b % 4;
    func_02069694(p, *(void **)(p + 0xbc), 4);
    func_02069694(p, *(void **)(p + 0xbc), 2);
    func_02069670(p, *(void **)(p + 0xbc), 4, ((uint32_t *)*(void **)(p + 0xc4))[(uint8_t)(r4 + 4)]);
    func_02069670(p, *(void **)(p + 0xbc), 2, ((uint32_t *)*(void **)(p + 0xc4))[r4]);
}
