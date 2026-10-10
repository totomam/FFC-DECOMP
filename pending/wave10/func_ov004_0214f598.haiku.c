#include "ffc/types.h"

extern void func_01fff000(void *p, uint32_t v);
extern uint32_t func_02081210(uint32_t a, uint32_t b);

void func_ov004_0214f598(uint32_t *out, uint8_t *obj)
{
    uint32_t buf[8];
    uint32_t size;
    uint32_t lo;

    if (obj[0xf5] == 0) {
        func_01fff000(out, *(uint32_t *)(obj + 0x98));
        return;
    }
    size = 2;
    size <<= 12;
    func_01fff000(&buf[5], *(uint32_t *)(obj + 0x9c));
    lo = buf[5];
    func_01fff000(&buf[6], *(uint32_t *)(obj + 0x98));
    *out = func_02081210(buf[6] + lo, size);
}
