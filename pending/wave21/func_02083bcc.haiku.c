#include "ffc/types.h"

extern void func_02083a98(void *buf, uint32_t a, uint32_t b);
extern void func_02083ac0(void *buf, uint32_t a, uint32_t b);
extern void func_02083b54(void *buf, uint32_t a);

void func_02083bcc(uint32_t p0, uint32_t p1, uint32_t p2)
{
    uint8_t buf[0x58];

    func_02083a98(buf, p1, p2);
    func_02083ac0(buf, p1, p2);
    func_02083b54(buf, p0);
}
