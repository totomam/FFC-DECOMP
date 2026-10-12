#include "ffc/types.h"

extern void func_ov006_021a4b14(uint32_t a, uint32_t b, uint32_t c);
extern void func_ov006_021a4d14(uint32_t a, uint32_t b);
extern uint8_t *data_ov006_021bc6fc;
extern uint32_t data_ov006_021b8148[];

void func_ov006_021a4cac(uint8_t p)
{
    uint32_t f2 = 0;
    uint32_t f1 = 0;
    int i;

    *(data_ov006_021bc6fc + 0x11d) = p;
    for (i = 0; i < 4; i++) {
        func_ov006_021a4b14(p, i, ((uint16_t *)(data_ov006_021b8148 + i * 12))[1]);
    }
    if (p == 2) {
        f2 = 1;
    } else if (p == 1) {
        f1 = 1;
    }
    func_ov006_021a4d14(0x2f, f2);
    func_ov006_021a4d14(0x30, f1);
}
