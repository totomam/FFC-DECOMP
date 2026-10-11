#include "ffc/types.h"

typedef struct {
    uint8_t init;
    uint8_t pad0[3];
    uint32_t f4;
    uint32_t f8;
    uint8_t pad1[0x18];
    uint16_t f24;
} S21C;

extern S21C data_ov000_0216e21c;
extern uint8_t data_ov000_0216e24c[];
extern uint8_t data_ov000_0216e228[];
extern void func_02084b2c(void *p, int a, int b);
extern void func_02087620(void *object);

void func_ov000_021501e4(void)
{
    if (data_ov000_0216e21c.init != 0) {
        return;
    }
    data_ov000_0216e21c.init = 1;
    data_ov000_0216e21c.f24 = 0;
    func_02084b2c(data_ov000_0216e24c, 0, 6);
    data_ov000_0216e21c.f8 = 0;
    data_ov000_0216e21c.f4 = 0;
    func_02087620(data_ov000_0216e228);
}
