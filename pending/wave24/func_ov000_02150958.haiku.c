#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern void func_ov000_0215114c(void);
extern uint32_t func_0208d8c8(void (*fn)(void));
extern void func_ov000_0214fbe4(uint32_t x);
extern void func_ov000_0214fb84(uint32_t a, uint32_t b, uint32_t c, uint32_t d);

void func_ov000_02150958(void)
{
    uint8_t *p = func_ov000_0214fa54();
    if (p[0x12dd] == 0) {
        p[0x12dd] = 1;
        if (func_0208d8c8(func_ov000_0215114c) != 2) {
            func_ov000_0214fbe4(0xb);
            func_ov000_0214fb84(7, 0, 0, 0x24f);
        }
    }
}
