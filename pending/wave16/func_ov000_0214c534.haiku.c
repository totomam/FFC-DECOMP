#include "ffc/types.h"

extern void func_ov000_0214c46c(void *dst, void *src, int n);
extern void func_ov000_0214beb4(void *dst, void *src, int n);
extern uint8_t data_ov000_021699f5[];

void func_ov000_0214c534(void *a, void *b)
{
    func_ov000_0214c46c(a, data_ov000_021699f5, 0x2c);
    func_ov000_0214beb4(b, a, 0x14);
}
