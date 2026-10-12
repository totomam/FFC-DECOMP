#include "ffc/types.h"

extern void func_0208763c(void *p);
extern void func_02056858(uint32_t v);
extern void func_02087678(void *p);

void func_02052d3c(uint8_t *self, uint32_t idx)
{
    volatile uint16_t *ime = (volatile uint16_t *)0x4000208;
    uint16_t prev;
    int32_t v;
    uint8_t *sub;

    prev = *ime;
    *ime = 0;
    v = *(int32_t *)(*(uint32_t **)(self + 0x1c) + idx);
    v = v - 1;
    *(int32_t *)(*(uint32_t **)(self + 0x1c) + idx) = v;
    v = *(int32_t *)(*(uint32_t **)(self + 0x1c) + idx);
    if (prev != 0) {
        *(volatile uint16_t *)0x4000208 = 1;
    } else {
        *(volatile uint16_t *)0x4000208 = 0;
    }
    (void)*ime;
    if (v > 0) {
        return;
    }
    sub = self + 0x20;
    func_0208763c(sub);
    if (((uint32_t *)*(uint32_t **)(self + 0x1c))[idx] == 0) {
        func_02056858(((uint32_t *)*(uint32_t **)(self + 0x18))[idx]);
    }
    func_02087678(sub);
}
