#include "ffc/types.h"

extern uint32_t func_ov001_02181c3c(void);
extern uint32_t func_ov001_021801a4(uint8_t *p, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t func_ov001_02180870(uint32_t a, uint32_t b, uint32_t c);

uint32_t func_ov001_0218145c(uint8_t *p, uint32_t a, uint32_t b, uint32_t c)
{
    uint32_t r4 = func_ov001_02181c3c();

    if (*(uint32_t *)(p + 0x2c) != 0) {
        if (func_ov001_021801a4(p, r4, a, b, 1, 0, 0, c) == 0) {
            return 0;
        }
    }

    if (r4 == 0) {
        return 1;
    }

    return func_ov001_02180870(r4, 6, 1) != 0;
}
