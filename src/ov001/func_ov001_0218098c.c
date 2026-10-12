#include "ffc/types.h"

extern uint32_t func_ov000_02168768(uint32_t p);
extern uint32_t func_ov001_02180124(uint8_t *self, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3);
extern uint32_t func_ov001_0217ffa8(uint8_t *self, uint32_t a1, uint32_t a2, uint32_t a3);

int32_t func_ov001_0218098c(uint8_t *self, uint32_t a, uint32_t b) {
    uint32_t st = *(uint32_t *)(self + 0xc);

    if (st != 5 && st != 6) {
        return 1;
    }
    if (func_ov000_02168768(*(uint32_t *)(self + 0x9c))) {
        return func_ov001_02180124(self, 0, a, b, 0) ? 1 : 0;
    }
    return func_ov001_0217ffa8(self, a, b, 0) ? 1 : 0;
}
