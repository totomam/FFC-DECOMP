#include "ffc/types.h"

extern uint8_t *func_ov001_02181c3c(uint8_t *a);
extern int func_ov001_021801a4(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d, int e, int f, int g, int h);
extern uint32_t func_ov000_0216591c(void);
extern int func_ov001_02180870(uint8_t *a, int b, int c);

int func_ov001_021813cc(uint8_t *p, uint32_t a1, uint32_t a2)
{
    uint8_t *r4 = func_ov001_02181c3c(p);

    if (*(uint32_t *)(p + 0x2c) != 0) {
        if (func_ov001_021801a4(p, r4, a1, a2, 1, 0, 0, 0) == 0) {
            return 0;
        }
    }

    if (r4 == 0) {
        return 1;
    }

    if (*(uint32_t *)(r4 + 0xc) == 0) {
        if (*(uint32_t *)(r4 + 0x20) == 0) {
            return 1;
        }
        {
            uint32_t t = func_ov000_0216591c();
            if (t - *(uint32_t *)(r4 + 0x1c) < *(uint32_t *)(r4 + 0x20)) {
                return 1;
            }
        }
        return func_ov001_02180870(r4, 6, 1) != 0;
    }
    return func_ov001_02180870(r4, 2, 1) != 0;
}
