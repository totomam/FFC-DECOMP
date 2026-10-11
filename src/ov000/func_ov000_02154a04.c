#include "ffc/types.h"

extern int32_t func_ov000_02152ae4(int32_t);
extern void func_ov000_02154bcc(int32_t, int32_t, int32_t);
extern int32_t func_ov000_0214f044(int32_t);
extern void func_ov000_02152b80(int32_t);
extern uint32_t data_ov000_0216e00c;

int32_t func_ov000_02154a04(int32_t a) {
    int32_t r6 = func_ov000_02152ae4(1);
    int32_t r4 = func_ov000_02152ae4(4);
    func_ov000_02154bcc(r6, a, r4);
    data_ov000_0216e00c = 4;
    if (func_ov000_0214f044(r4) != 0) {
        func_ov000_02152b80(2);
        return 0x11;
    }
    return 0xc;
}
