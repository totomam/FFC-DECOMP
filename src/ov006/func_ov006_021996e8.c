#include "ffc/types.h"

extern uint32_t func_02088978(void);
extern void func_0208898c(uint32_t);
extern int func_ov006_0219a38c(int);
extern uint8_t *data_ov006_021ba160;

int func_ov006_021996e8(int param, uint32_t sel)
{
    uint16_t r4;
    uint32_t r5;
    uint32_t irq = func_02088978();

    switch (sel) {
    case 0:
        r5 = 10;
        r4 = 4;
        break;
    case 1:
        r5 = 10;
        r4 = 3;
        break;
    case 2:
        r5 = 14;
        r4 = 2;
        break;
    case 3:
        r5 = 7;
        r4 = 5;
        break;
    default:
        func_0208898c(irq);
        return 0;
    }

    if (data_ov006_021ba160 != 0 && func_ov006_0219a38c(param) != 0) {
        int idx = param - 1;
        uint8_t *base = data_ov006_021ba160;
        if (*(uint32_t *)(base + 0x14e8 + idx * 4) == r5) {
            *(uint16_t *)(base + 0x1754 + idx * 2) = r4;
            func_0208898c(irq);
            return 1;
        }
    }

    func_0208898c(irq);
    return 0;
}
