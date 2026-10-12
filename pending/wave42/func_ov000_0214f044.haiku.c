#include "ffc/types.h"

extern void func_ov000_0214cf68(uint32_t *p);
extern void func_ov000_0214f010(void);
extern void func_ov000_0214f02c(void);
extern uint32_t data_ov000_0216e088[];
extern uint32_t data_ov000_0216e108[];
extern uint32_t data_ov000_0216e0d8[];

void func_ov000_0214f044(uint32_t *p)
{
    uint32_t v;
    uint32_t m = 0xff000000u;

    data_ov000_0216e088[0x50 / 4] = (p[0xc / 4] == 1);

    v = p[0x10 / 4];
    data_ov000_0216e088[0x54 / 4] = (uint8_t)(v >> 24) | ((v >> 8) & 0xff00u) | ((v << 8) & 0xff0000u) | ((v << 24) & m);
    v = p[0x14 / 4];
    data_ov000_0216e088[0x58 / 4] = (uint8_t)(v >> 24) | ((v >> 8) & 0xff00u) | ((v << 8) & 0xff0000u) | ((v << 24) & m);
    v = p[0x18 / 4];
    data_ov000_0216e088[0x5c / 4] = (uint8_t)(v >> 24) | ((v >> 8) & 0xff00u) | ((v << 8) & 0xff0000u) | ((v << 24) & m);
    v = p[0x1c / 4];
    data_ov000_0216e088[0x60 / 4] = (uint8_t)(v >> 24) | ((v >> 8) & 0xff00u) | ((v << 8) & 0xff0000u) | ((v << 24) & m);
    v = p[0x20 / 4];
    data_ov000_0216e088[0x64 / 4] = (uint8_t)(v >> 24) | ((v >> 8) & 0xff00u) | ((v << 8) & 0xff0000u) | ((v << 24) & m);

    data_ov000_0216e088[0x68 / 4] = (uint32_t)func_ov000_0214f010;
    data_ov000_0216e088[0x6c / 4] = (uint32_t)func_ov000_0214f02c;
    data_ov000_0216e088[0xc / 4] = p[4 / 4];
    data_ov000_0216e088[4 / 4] = p[8 / 4];
    data_ov000_0216e088[0x70 / 4] = 0x40;
    data_ov000_0216e108[0] = p[0x2c / 4];
    data_ov000_0216e108[1] = p[0x30 / 4];
    func_ov000_0214cf68(data_ov000_0216e0d8);
}
