#include "ffc/types.h"

extern void func_ov010_021c8ffc(uint8_t *p, uint32_t v);

void func_ov010_021c9340(uint8_t *a, uint32_t b, uint32_t c, uint32_t d)
{
    if (d != 0) {
        return;
    }
    if (c & 2) {
        return;
    }
    {
        uint32_t *obj = *(uint32_t **)(a + 0xf4);
        uint32_t idx = *(uint32_t *)(a + 0x10c);
        uint32_t v = obj[idx];
        *(uint32_t *)(*(uint8_t **)(a + 0x17c) + 0x1c) = v;
        *(uint32_t *)(*(uint8_t **)(a + 0x17c) + 0x20) = b;
    }
    func_ov010_021c8ffc(a, 1);
}
