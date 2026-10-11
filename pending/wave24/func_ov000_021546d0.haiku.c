#include "ffc/types.h"

extern void func_02083a98(void *p);
extern void func_02083ac0(void *dst, void *src, uint32_t n);
extern void func_02083b54(void *p, void *out);
extern void func_02084ca4(void *dst, void *src, uint32_t n);

void func_ov000_021546d0(void *a, void *b)
{
    uint8_t buf[0x14];
    uint8_t s[0x58];

    func_02083a98(s);
    func_02083ac0(s, a, 0x18);
    func_02083b54(s, buf);
    func_02084ca4(buf + 3, b, 0xd);
}
