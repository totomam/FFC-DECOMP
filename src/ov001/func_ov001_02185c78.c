#include "ffc/types.h"

extern uint32_t func_ov000_0216591c(void *a);
extern void func_ov001_021856f0(void *p);

void func_ov001_02185c78(uint8_t *a) {
    uint32_t t = func_ov000_0216591c(a);
    uint8_t *p = *(uint8_t **)(a + 8);
    while (p != 0) {
        if (t <= *(uint32_t *)(p + 0x1c) + 0x9c4) {
            break;
        }
        p[0x15] |= 0x10;
        *(uint32_t *)(*(uint8_t **)(a + 8) + 0x1c) = 0x9c4;
        (*(uint8_t **)(a + 8))[0x15] &= 0xd3;
        ((void (*)(void *, int, void *, uint32_t))(*(uint32_t *)(a + 0x58)))(a, 1, *(uint8_t **)(a + 8), *(uint32_t *)(a + 0x5c));
        func_ov001_021856f0(a + 8);
        p = *(uint8_t **)(a + 8);
    }
}
