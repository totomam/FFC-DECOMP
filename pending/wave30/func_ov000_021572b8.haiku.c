#include "ffc/types.h"

extern uint32_t data_ov000_0216ff6c[];
extern void func_ov000_0215662c(void);
extern void func_ov000_02155670(void);
extern int func_02086fe4(void *p);
extern void func_02086fbc(void *p);

void func_ov000_021572b8(void)
{
    uint32_t off;

    if (data_ov000_0216ff6c[1] == 0) {
        return;
    }
    if (data_ov000_0216ff6c[0]) {
        func_ov000_0215662c();
    }
    func_ov000_02155670();
    off = 0x1188;
    if (*(uint32_t *)((uint8_t *)data_ov000_0216ff6c[1] + off)) {
        if (func_02086fe4((uint8_t *)data_ov000_0216ff6c[1] + (off - 0x6c)) == 0) {
            off -= 0x6c;
            func_02086fbc((uint8_t *)data_ov000_0216ff6c[1] + off);
        }
    }
    *(uint32_t *)((uint8_t *)data_ov000_0216ff6c[1] + 0x1004) = (uint32_t)-7;
}
