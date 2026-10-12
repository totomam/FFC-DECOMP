#include "ffc/types.h"

extern int func_ov000_0215b6dc(void);
extern void func_ov000_02159014(uint32_t code, uint32_t msg);
extern int func_ov000_0216443c(void);
extern uint32_t func_ov000_02164070(uint32_t x);
extern void func_ov000_02164824(int a, uint32_t b, uint32_t c);
extern void func_ov000_0216489c(int a, uint32_t b, uint32_t c);
extern void func_ov000_02164930(int a, uint32_t b, uint32_t c);
extern uint8_t *data_ov000_0217096c;

void func_ov000_02164640(uint32_t unused, uint32_t b, uint32_t c)
{
    int r4;
    uint32_t v;

    r4 = func_ov000_0215b6dc();
    if (r4 == 0xff) {
        func_ov000_02159014(6, 0xfffe8298);
        return;
    }
    switch (func_ov000_0216443c()) {
    case 0:
        v = func_ov000_02164070(b);
        if (v >= 2 && v < 5) {
            func_ov000_02164824(r4, b, c);
        }
        return;
    case 1:
        func_ov000_02164824(r4, b, c);
        return;
    case 2:
        func_ov000_0216489c(r4, b, c);
        return;
    case 3:
        func_ov000_02164930(r4, b, c);
        return;
    case 4:
        *(data_ov000_0217096c + r4 * 0x38 + 0x1d) = 1;
        *(uint32_t *)(data_ov000_0217096c + r4 * 0x38 + 0x10) = 0;
        *(uint32_t *)(data_ov000_0217096c + r4 * 0x38 + 0x18) = 0;
        return;
    default:
        func_ov000_02159014(6, 0xfffe82b6);
        return;
    }
}
