#include "ffc/types.h"

extern void func_02084b2c(void *p, uint32_t a, uint32_t b);
extern void func_02087620(void *object);
extern uint8_t data_ov000_0216e21c[];
extern uint8_t data_ov000_0216e24c[];
extern uint8_t data_ov000_0216e228[];

void func_ov000_021501e4(void)
{
    uint8_t *p = data_ov000_0216e21c;

    if (p[0] != 0) {
        return;
    }
    p[0] = 1;
    *(uint16_t *)(p + 0x24) = 0;
    func_02084b2c(data_ov000_0216e24c, 0, 6);
    *(uint32_t *)(p + 8) = 0;
    *(uint32_t *)(p + 4) = 0;
    func_02087620(data_ov000_0216e228);
}
