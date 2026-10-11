#include "ffc/types.h"

extern uint8_t func_ov000_02152b68(void);
extern void func_ov000_02152a34(void);
extern void func_ov000_02151f54(uint8_t *p);
extern void func_ov000_02152b20(uint8_t v);

int func_ov000_0215287c(void)
{
    uint8_t v = func_ov000_02152b68();
    if (v == 0 || v == 0x12) {
        func_ov000_02152a34();
        return 1;
    }
    func_ov000_02151f54(&v);
    func_ov000_02152b20(v);
    return 0;
}
