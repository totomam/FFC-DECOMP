#include "ffc/types.h"

extern void func_ov000_02155770(uint8_t *buf);
extern void func_020928f0(uint8_t *dst, uint8_t *src, uint32_t n);

void func_ov000_02155fc4(uint8_t *a, uint8_t *b)
{
    uint8_t buf[0x1c4];

    func_ov000_02155770(buf);
    func_020928f0(a, buf + 0x4a, 0x12d);
    a[0x12c] = 0;
    func_020928f0(b, buf + 0x177, 9);
    b[8] = 0;
}
