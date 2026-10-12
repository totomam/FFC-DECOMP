#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0216307c(uint32_t a, uint32_t b, uint32_t c);
extern uint32_t func_ov000_0215c1d0(void);
extern void func_ov000_02163a38(uint32_t x);
extern void func_ov000_021631c4(uint32_t x);

uint32_t func_ov000_02163150(void)
{
    uint8_t *a;
    uint8_t *b;
    uint8_t *c;
    uint32_t r4;
    uint32_t r0;

    if (*(uint32_t *)(func_ov000_02163350() + 0x48) == 0) {
        return 0;
    }
    if (*(uint32_t *)(func_ov000_02163350() + 0x44) != 0) {
        a = func_ov000_02163350();
        b = func_ov000_02163350();
        c = func_ov000_02163350();
        func_ov000_0216307c(*(uint32_t *)(a + 0x2c), *(uint32_t *)(b + 0x34), *(uint32_t *)(c + 0x38));
        *(uint32_t *)(func_ov000_02163350() + 0x44) = 0;
    }
    r4 = *(uint32_t *)(func_ov000_02163350() + 0x2c);
    if (r4 == 0xff) {
        return 0;
    }
    r0 = func_ov000_0215c1d0();
    if (r4 != 0) {
        if (r0 != 0) {
            goto A;
        }
    }
    if (r4 != 0 || r0 != 0) {
        goto B;
    }
A:
    func_ov000_02163a38(0);
    return 1;
B:
    func_ov000_021631c4(r4);
    return 1;
}
