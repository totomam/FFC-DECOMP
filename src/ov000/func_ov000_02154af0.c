#include "ffc/types.h"

extern void func_ov000_02152ae4(int arg);
extern int func_ov000_021571b8(void);
extern void func_ov000_02152b80(int arg);

int func_ov000_02154af0(void)
{
    func_ov000_02152ae4(8);
    if (func_ov000_021571b8() != 0) {
        func_ov000_02152b80(3);
        return 0x11;
    }
    return 0xe;
}
