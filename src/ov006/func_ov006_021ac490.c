#include "ffc/types.h"

typedef struct Inner {
    uint8_t pad[0x44];
    uint8_t flag;
} Inner;

typedef struct Outer {
    uint8_t pad0[4];
    uint16_t f4;
    uint8_t pad6[2];
    Inner *f8;
} Outer;

extern Outer data_ov006_021bc78c;
extern uint8_t data_ov006_021b8697[];
extern uint32_t func_0208130c(uint32_t a, uint32_t b);
extern uint32_t func_02081334(uint32_t a, uint32_t b);

void func_ov006_021ac490(void)
{
    Outer *p = &data_ov006_021bc78c;
    if (p->f8->flag != 0) {
        uint32_t r4 = func_0208130c(p->f4, 0x1d);
        uint32_t r0 = func_02081334(p->f4, 0x1d) - 0x33;
        *(uint32_t *)0x4000010 = (r0 << 16) & 0x1ff0000;
        r0 = r0 + data_ov006_021b8697[r4];
        *(uint32_t *)0x4000018 = (r0 << 16) & 0x1ff0000;
        p->f8->flag = 0;
    }
}
