#include "ffc/types.h"

extern uint8_t data_020b055c;
extern uint8_t data_0213e018[];
extern uint32_t func_020878ac(uint32_t a, uint32_t b);
extern void func_020849ac(uint16_t a, uint32_t b, uint32_t c);
extern void func_020849e0(uint32_t a, uint32_t b, uint32_t c);
extern void func_02084a0c(uint32_t a, uint32_t b, uint32_t c);
extern void func_02084554(uint32_t a, uint32_t b, uint16_t c, uint32_t d, uint32_t e);
extern void func_02084498(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e);

typedef struct {
    uint8_t pad[0x14];
    uint32_t w14;
    uint32_t w18;
    uint32_t w1c;
} S;

void func_020569ec(S *p) {
    uint32_t r6 = p->w14;
    uint32_t r4 = p->w18;
    uint32_t r5 = p->w1c;

    if (data_020b055c == 0 || data_0213e018[3] != 0) {
        if (((r4 | r5) & 3) != 0) {
            func_020849ac((uint16_t)r6, r4, r5);
        } else if ((r5 & 0x1f) != 0) {
            func_020849e0(r6, r4, r5);
        } else {
            func_02084a0c(r6, r4, r5);
        }
        return;
    }

    {
        uint32_t t = func_020878ac(r4, r5);
        if (((r4 | r5) & 3) != 0) {
            func_02084554(t, r4, (uint16_t)r6, r5, 1);
        } else {
            func_02084498(t, r4, r6, r5, 1);
        }
    }
}
