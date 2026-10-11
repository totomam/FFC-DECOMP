#include "ffc/types.h"

extern void *func_ov000_021653d4(uint32_t size);
extern void *func_020903cc(void *object, int c, uint32_t n);

void *func_ov000_02165208(void)
{
    uint8_t *p = (uint8_t *)func_ov000_021653d4(0x38);
    if (p == 0) {
        return 0;
    }
    func_020903cc(p, 0, 0x38);
    *(uint32_t *)(p + 0xc) = 1;
    return p;
}
