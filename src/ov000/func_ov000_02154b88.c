#include "ffc/types.h"

extern void func_ov000_02152ba4(uint8_t v);
extern void func_ov000_02152c00(uint8_t v);

int func_ov000_02154b88(uint8_t *p)
{
    func_ov000_02152ba4(p[0x14bd]);
    func_ov000_02152c00(p[0x14bd]);
    return 0x10;
}
