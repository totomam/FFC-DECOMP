#include "ffc/types.h"

extern void func_0200acb8(uint8_t *item, uint8_t *start, uint8_t *end, uint32_t flag);

void func_0200ada8(uint8_t *self, uint8_t *range)
{
    int32_t n = *(int32_t *)(self + 0x150) + 1;
    *(int32_t *)(self + 0x150) = n;
    uint8_t *item = self + 0xb4 + n * 12;
    if (item == range) {
        return;
    }
    uint8_t *start = *(uint8_t **)range;
    uint32_t len = *(uint32_t *)(range + 4);
    uint32_t tmp;
    uint8_t *tp = (uint8_t *)&tmp;
    *tp = 0;
    uint8_t v = *tp;
    uint8_t *tq = (uint8_t *)&tmp - 4;
    *tq = v;
    uint32_t flag = *(uint32_t *)tq;
    func_0200acb8(item, start, start + (len << 4), flag);
}
