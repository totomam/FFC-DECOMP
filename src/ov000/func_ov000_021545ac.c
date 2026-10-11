#include "ffc/types.h"

extern void func_ov000_02154640(void *a, void *b);
extern void func_ov000_021546d0(void *a, void *b);

void func_ov000_021545ac(void *a, void *b)
{
    uint8_t buf[0x18];
    func_ov000_02154640(a, buf);
    func_ov000_021546d0(buf, b);
}
