#include "ffc/types.h"

extern int32_t data_ov000_0216e018;
extern int32_t func_ov000_0214e7d8(int32_t);
extern void func_ov000_0214e4a0(int32_t);
extern int32_t func_ov000_0214e428(int32_t);
extern void func_ov000_0214e72c(int32_t);
extern int32_t func_ov000_02145544(void);
extern void func_ov000_021502ac(int32_t);

int32_t func_ov000_0214e848(void) {
    int32_t ret;
    int32_t r;
    if (data_ov000_0216e018 != 0) {
        ret = func_ov000_0214e7d8(data_ov000_0216e018);
        if (ret == 0) {
            func_ov000_0214e4a0(data_ov000_0216e018);
            r = func_ov000_0214e428(data_ov000_0216e018);
            if (r != 0) {
                data_ov000_0216e018 = 0;
                r = 0;
            }
            ret = -26;
        } else {
            r = ret;
        }
        func_ov000_0214e72c(r);
    } else {
        if (func_ov000_02145544() != 0) {
            func_ov000_021502ac(0);
            ret = 0;
        } else {
            ret = -26;
        }
    }
    return ret;
}
