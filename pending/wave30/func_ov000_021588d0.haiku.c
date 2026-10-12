#include "ffc/types.h"

extern void func_02084b2c(void *p, int v, uint32_t n);
extern int func_02087460(void);
extern int func_ov000_02148f28(void *p);
extern int func_ov000_02148ee0(void *p);
extern int func_ov000_02158738(void *p);
extern void func_ov000_02158780(void *p);

int func_ov000_021588d0(void *p)
{
    int r4;

    func_02084b2c(p, 0, 0x1000);
    if (func_02087460() != 0) {
        r4 = func_ov000_02148f28(p);
    } else {
        r4 = func_ov000_02148ee0(p);
    }
    func_02084b2c(p, 0, 0x1000);
    if (func_ov000_02158738(p) != 0) {
        func_ov000_02158780((uint8_t *)p + 0xf0);
        return r4;
    }
    return -10001;
}
