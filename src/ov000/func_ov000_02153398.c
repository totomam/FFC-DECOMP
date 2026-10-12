#include "ffc/types.h"

extern void func_ov000_02152f94(void);
extern int func_ov000_0215326c(void);
extern uint32_t func_ov000_02152818(void);
extern uint32_t func_ov000_0214f964(void);
extern void func_ov000_02159014(int32_t a, int32_t b);

int func_ov000_02153398(void) {
    uint32_t r4;
    int32_t r1;
    int32_t r0;
    func_ov000_02152f94();
    if (func_ov000_0215326c() != 0) {
        r4 = func_ov000_02152818();
        if (r4 == 0xff || r4 > 0x63) {
            r4 = 0x63;
        }
        if (func_ov000_0214f964() == 0xb) {
            r0 = 9;
            r1 = (int32_t)0xffff298c;
        } else {
            r0 = 8;
            r1 = (int32_t)0xffff2d10;
        }
        r1 = r1 - (int32_t)r4;
        func_ov000_02159014(r0, r1);
        return 1;
    }
    return 0;
}
