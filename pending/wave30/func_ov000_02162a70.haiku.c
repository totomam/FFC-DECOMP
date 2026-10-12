#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0215dbd8(uint32_t a, uint32_t b);

uint32_t func_ov000_02162a70(void *p) {
    if (p) {
        return 1;
    }
    if (func_ov000_02163350()[0x15] != 3) {
        uint8_t *s = func_ov000_02163350();
        s[0x5f9]++;
    }
    if (func_ov000_02163350()[0x15] == 3 ||
        *(uint32_t *)(func_ov000_02163350() + 0x798) != 0 ||
        func_ov000_02163350()[0x5f9] >= 5) {
        func_ov000_0215dbd8(6, 0xfffeae6c);
        return 0;
    }
    return 1;
}
