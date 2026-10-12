#include "ffc/types.h"

extern void *func_ov000_02152ae4(uint32_t size);
extern void func_02084ca4(int flag, void *dst, uint32_t n);
extern void func_02084b2c(void *dst, int val, uint32_t n);
extern void func_ov000_02152904(void *self, uint32_t a, uint32_t b);

void func_ov000_021528b0(void *self, uint32_t a, uint32_t b, uint16_t c, int flag, uint32_t d)
{
    uint8_t *p;
    uint8_t *q;

    p = (uint8_t *)func_ov000_02152ae4(1);
    q = (uint8_t *)func_ov000_02152ae4(0x10);
    if (flag != 0) {
        func_02084ca4(flag, p + 0x18, 10);
    } else {
        func_02084b2c(p + 0x18, 0, 10);
    }
    *(p + 0x22) = d;
    func_ov000_02152904(self, a, b);
    *(uint16_t *)(q + 0xea) = c;
}
