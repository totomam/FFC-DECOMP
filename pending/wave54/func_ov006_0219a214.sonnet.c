#include "ffc/types.h"

extern void func_020849ac(uint32_t a, void *b, uint32_t c);
extern uint32_t func_ov006_02199e68(uint32_t a, uint32_t b);
extern uint32_t func_ov006_02199e90(uint32_t a);
extern uint32_t func_ov006_0219a058(void);
extern uint8_t *data_ov006_021ba160;

void func_ov006_0219a214(void)
{
    uint16_t buf[6];
    uint16_t i;
    uint32_t r;

    func_020849ac(0, buf, 10);
    for (i = 1; i <= 15; i++) {
        uint32_t v = *(uint32_t *)(data_ov006_021ba160 + i * 4 + 0x14e4);
        switch (v) {
        case 0: case 1: case 3: case 6: case 7: case 9: case 10:
            break;
        case 2:
            buf[0] |= (uint16_t)(1 << i);
            break;
        case 5:
            buf[1] |= (uint16_t)(1 << i);
            break;
        case 4:
            buf[2] |= (uint16_t)(1 << i);
            break;
        case 8:
            buf[3] |= (uint16_t)(1 << i);
            break;
        case 11:
            buf[4] |= (uint16_t)(1 << i);
            break;
        default:
            break;
        }
    }

    if (buf[3] != 0) {
        r = func_ov006_02199e68(5, buf[3]);
    } else if (buf[0] != 0) {
        r = func_ov006_02199e68(1, buf[0]);
    } else if (buf[4] != 0) {
        r = func_ov006_02199e68(6, buf[4]);
    } else if (buf[2] != 0) {
        r = func_ov006_02199e68(2, buf[2]);
    } else if (buf[1] != 0) {
        r = func_ov006_02199e90(buf[1]);
    } else {
        r = func_ov006_0219a058();
    }
    if (r == 0x15) {
        func_ov006_02199e68(0, 0xffff);
    }
}
