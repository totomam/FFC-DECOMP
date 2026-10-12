#include "ffc/types.h"

extern uint8_t *func_ov000_02163350(void);
extern int32_t func_ov000_021633a8(void);
extern uint32_t func_ov000_0215b534(void);
extern int32_t func_ov000_021632f0(void);
extern uint32_t func_ov000_0215b4b0(void);

int32_t func_ov000_0215c1d0(void)
{
    int32_t r4;
    uint32_t r5;
    uint8_t *p;

    r4 = -1;
    if (func_ov000_02163350() == 0) {
        return 0;
    }
    if (func_ov000_021633a8() == 0) {
        return 0;
    }
    p = func_ov000_02163350();
    r5 = *(uint32_t *)(p + 0x1c);
    r5 &= func_ov000_0215b534();
    if (func_ov000_021632f0() == 0) {
        r5 &= ~(1u << func_ov000_0215b4b0());
    }
    if ((func_ov000_0215b534() ^ r5) == 0) {
        r4 = 1;
    } else if ((func_ov000_0215b534() & r5) == 0) {
        r4 = 0;
    }
    if (r4 != -1) {
        p = func_ov000_02163350();
        *(uint32_t *)(p + 0x28) = (r4 == 1) ? 1 : 0;
    }
    p = func_ov000_02163350();
    return *(int32_t *)(p + 0x28);
}
