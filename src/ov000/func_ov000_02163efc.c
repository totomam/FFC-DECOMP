#include "ffc/types.h"

extern int func_ov000_02159000(uint32_t a);
extern int func_ov000_0215b560(uint32_t a);
extern uint32_t func_ov000_0215b4b0(void);
extern void func_ov000_021644a4(uint32_t r0, uint32_t a, uint32_t b, int32_t c, uint32_t d);
extern uint8_t *data_ov000_0217096c;

int func_ov000_02163efc(uint32_t a, uint32_t b, int32_t c)
{
    uint8_t *g;
    void (*fn)(int32_t, uint32_t, uint32_t);

    if (func_ov000_02159000(a) != 0) {
        return 0;
    }
    if (func_ov000_0215b560(a) == 0) {
        return 0;
    }
    if (c > 0x5b6) {
        return 0;
    }
    func_ov000_021644a4(func_ov000_0215b4b0(), a, b, c, 1);
    g = data_ov000_0217096c;
    fn = *(void (**)(int32_t, uint32_t, uint32_t))(g + 0x700);
    if (fn != 0) {
        fn(c, a, *(uint32_t *)(g + 0x710));
    }
    return 1;
}
