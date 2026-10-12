#include "ffc/types.h"

extern uint32_t func_0208130c(uint32_t a, uint32_t b);
extern void func_ov006_021af5ac(int a, int b, int c, int d, uint32_t e);

typedef struct {
    uint16_t a;
    uint16_t h;
    uint8_t *p;
} Data;
extern Data data_ov006_021bc778;

void func_ov006_021a9280(void) {
    
    int r4;
    uint32_t r0 = 0;
    uint8_t v;

    *(uint16_t *)(data_ov006_021bc778.p + 0x40) = (uint16_t)((data_ov006_021bc778.p[0x51] - 4) * 0x1c);
    uint8_t *q = data_ov006_021bc778.p;
    v = q[0x51];
    if (v <= 4) {
        r4 = 0;
        q[0x53] = 0;
    } else if (v <= 8) {
        r4 = 1;
        q[0x53] = 0x1f;
    } else {
        r4 = 2;
        q[0x53] = 0x37;
    }
    if (r4 != 0) {
        r0 = func_0208130c((uint32_t)data_ov006_021bc778.h * data_ov006_021bc778.p[0x53], *(uint16_t *)(data_ov006_021bc778.p + 0x40));
    }
    func_ov006_021af5ac(r4, 0x55, 0xec, 0x3f, r0);
}
