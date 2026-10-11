#include "ffc/types.h"

extern void func_ov006_0219ef6c(void *p, int v, int n);
extern uint8_t data_ov006_021baf3c[];
extern uint8_t data_ov006_021ba200[];

typedef struct {
    uint32_t w0[4];
    uint32_t f10;
    uint32_t w14[4];
    uint32_t f24;
    uint32_t f28;
    uint32_t f2c;
    uint32_t f30;
    uint32_t f34;
} S1;

typedef struct {
    uint32_t w[7];
    uint8_t b1c;
    uint8_t b1d;
} S2;

extern S1 data_ov006_021ba1dc;
extern S2 data_ov006_021ba1fc;

void func_ov006_0219da48(uint8_t *p)
{
    func_ov006_0219ef6c(data_ov006_021baf3c, 0, 8);
    data_ov006_021ba1dc.f10 = 1;
    func_ov006_0219ef6c(data_ov006_021ba200, 0, 0x1c);
    data_ov006_021ba1dc.f24 = (uint32_t)(p + 6);
    data_ov006_021ba1dc.f28 = *(uint16_t *)(p + 4);
    data_ov006_021ba1dc.f2c = *(uint16_t *)p & 0xf;
    data_ov006_021ba1fc.b1d = p[2];
    data_ov006_021ba1dc.f30 = 0;
    data_ov006_021ba1dc.f34 = 0xc0a80b01;
    data_ov006_021ba1fc.b1c = 0;
}
