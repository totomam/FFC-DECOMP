#include "ffc/types.h"

extern uint32_t func_020424e0(uint32_t x);
extern void func_ov003_02165af4(uint32_t a, uint32_t b, uint32_t c, uint32_t d,
                                uint32_t e, uint32_t f, uint32_t g, void *h);

void func_ov003_02165ac4(uint8_t *p)
{
    uint32_t r;
    r = func_020424e0(*(uint32_t *)(p + 0x14));
    func_ov003_02165af4(r,
                        *(uint32_t *)(p + 0x18),
                        *(uint32_t *)(p + 0x1c),
                        *(uint32_t *)(p + 0x20),
                        *(uint32_t *)(p + 0x24),
                        *(uint8_t *)(p + 0x38),
                        *(uint32_t *)(p + 0x3c),
                        (void *)(p + 0x28));
}
