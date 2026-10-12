#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern void func_ov000_0216335c(int x);
extern void func_ov000_0216384c(void);
extern int func_ov000_02163408(void);
extern uint64_t func_020882cc(void);
extern void func_ov001_02184030(uint32_t x);
extern uint8_t *func_ov000_02163634(int i);
extern void func_ov000_02161084(uint32_t a, uint32_t b);

#define ST32(off) (*(uint32_t *)(func_ov000_02163350() + (off)))
#define ST8(off) (*(uint8_t *)(func_ov000_02163350() + (off)))

int func_ov000_021608b0(void)
{
    int i;
    uint32_t r5;
    r5 = 0;

    if (ST32(0x5a4) != 0 || ST32(0x5a8) == 0xf) {
        ST8(0x18) = 0;
        ST32(0x5dc) = 0;
        func_ov000_0216335c(1);
        func_ov000_0216384c();
        return 0;
    }

    ST8(0x18) = r5;
    ST32(0x5dc) = r5;
    if (ST8(0xd) == 0 && func_ov000_02163408() == 1) {
        uint64_t v = func_020882cc();
        *(uint64_t *)(func_ov000_02163350() + 0x7a0) = v;
    }
    func_ov001_02184030(ST32(0x10));
    if (ST8(0x14) == 2) {
        *(uint32_t *)(func_ov000_02163350() + 0x680) = ST32(0x554);
    }
    func_ov000_0216335c(0x13);
    ST32(0x650) = 0;
    for (i = 1; i < func_ov000_02163408(); i++) {
        func_ov000_02161084(func_ov000_02163634(i)[0x16], 2);
    }
    func_ov000_02161084(ST8(0x56a), 2);
    if (ST8(0x14) != 2) {
        r5 = 1;
    }
    return r5;
}
