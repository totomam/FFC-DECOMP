#include "ffc/types.h"

extern uint8_t data_ov007_021c8144[];
extern void func_ov007_021bc310(void *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void *func_ov007_021bce1c(uint8_t *self, uint32_t a, uint32_t b, uint32_t c, uint32_t d)
{
    func_ov007_021bc310(self, a, d, 0, 0);
    *(uint8_t **)self = data_ov007_021c8144;
    *(uint32_t *)(self + 0x1d4) = b;
    *(uint32_t *)(self + 0x1d8) = c;
    self[0xb5] = 1;
    return self;
}
