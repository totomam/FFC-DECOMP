#include "ffc/types.h"

extern void func_02083a98(void *buf);
extern void func_02083ac0(void *buf, uint32_t b, uint32_t c);
extern void func_02083b54(void *buf, uint32_t a);

void func_02083bcc(uint32_t a, uint32_t b, uint32_t c)
{
    uint8_t buf[0x58];
    func_02083a98(buf);
    func_02083ac0(buf, b, c);
    func_02083b54(buf, a);
}
