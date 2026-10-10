#include "ffc/types.h"

extern void func_ov000_0215b6a0(void);
extern int32_t func_ov001_0218082c(void);

int32_t func_ov000_0216498c(void)
{
    int32_t r;
    func_ov000_0215b6a0();
    r = func_ov001_0218082c();
    r = r - 0x207;
    if (r > 0) {
        return r;
    }
    return 0;
}
