#include "ffc/types.h"
extern void func_ov006_0219ef6c(void *p, int v, int n);
extern uint8_t data_ov006_021baf3c[];
extern uint32_t data_ov006_021ba1dc[];
extern uint8_t data_ov006_021ba200[];
extern uint8_t data_ov006_021ba1fc[];
void func_ov006_0219da48(uint8_t *p) {
    func_ov006_0219ef6c(data_ov006_021baf3c, 0, 8);
    data_ov006_021ba1dc[4] = 1;
    func_ov006_0219ef6c(data_ov006_021ba200, 0, 0x1c);
    data_ov006_021ba1dc[9] = (uint32_t)(p + 6);
    data_ov006_021ba1dc[10] = *(uint16_t *)(p + 4);
    data_ov006_021ba1dc[11] = *(uint16_t *)p & 0xf;
    data_ov006_021ba1fc[0x1d] = p[2];
    data_ov006_021ba1dc[12] = 0;
    data_ov006_021ba1dc[13] = 0xc0a80b01;
    data_ov006_021ba1fc[0x1c] = 0;
}
