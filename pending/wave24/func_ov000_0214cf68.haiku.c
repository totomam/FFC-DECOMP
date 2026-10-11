#include "ffc/types.h"

extern void func_02004eb0(uint32_t x);
extern void func_ov000_0214eab4(void);
extern void func_ov000_0214cfd0(void);
extern int32_t func_ov000_0214cfa4(void);
extern void func_ov000_0214e7bc(void);
extern int32_t data_ov000_02169a34;

int32_t func_ov000_0214cf68(int32_t a)
{
    int32_t r;
    func_02004eb0(0x2005098);
    if (data_ov000_02169a34 != 0) {
        return 0;
    }
    func_ov000_0214eab4();
    data_ov000_02169a34 = a;
    func_ov000_0214cfd0();
    r = func_ov000_0214cfa4();
    if (r < 0) {
        func_ov000_0214e7bc();
        data_ov000_02169a34 = 0;
    }
    return r;
}
