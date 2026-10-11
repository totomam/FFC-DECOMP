#include "ffc/types.h"

extern void func_ov001_02183e68(void);
extern uint8_t *func_ov000_02163350(void);

void func_ov000_0215cae0(uint8_t *a0)
{
    uint8_t s;
    if (a0 == 0) {
        return;
    }
    func_ov001_02183e68();
    if (*(uint32_t *)(a0 + 0xbc) != 0) {
        return;
    }
    s = func_ov000_02163350()[0x14];
    if (s != 0) {
        if (s != 2) {
            if (s != 3) {
                return;
            }
        }
    }
    func_ov000_02163350();
}
