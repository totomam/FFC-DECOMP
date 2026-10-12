#include "ffc/types.h"

extern int32_t func_ov000_0214efd8(int32_t a, int32_t b, int32_t c);
extern void func_ov000_021652a8(int32_t a, int32_t b, int32_t c, void *d, int32_t e, void *f);
extern char data_ov000_0216b3a0[];
extern char data_ov000_0216b3ac[];
extern char data_ov000_0216b3bc[];
extern char data_ov000_0216b3e4[];

int32_t func_ov000_0216564c(int32_t a, int32_t b)
{
    int32_t flags;
    void *p;

    flags = func_ov000_0214efd8(a, 3, 0);
    if (b) {
        flags &= ~4;
    } else {
        flags |= 4;
    }

    if (func_ov000_0214efd8(a, 4, flags) == 0) {
        p = data_ov000_0216b3a0;
        if (b == 0) {
            p = data_ov000_0216b3ac;
        }
        func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b3bc, a, p);
        return 1;
    }

    p = data_ov000_0216b3a0;
    if (b == 0) {
        p = data_ov000_0216b3ac;
    }
    func_ov000_021652a8(0xc, 0, 0x10, data_ov000_0216b3e4, a, p);
    return 0;
}
