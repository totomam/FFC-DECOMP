#include "ffc/types.h"

extern void func_ov000_021585a8(void *p);
extern void func_ov000_02156050(void *a, void *b);

void func_ov000_02156034(void *a)
{
    uint8_t buf[0x14];
    func_ov000_021585a8(buf);
    func_ov000_02156050(a, buf);
}
