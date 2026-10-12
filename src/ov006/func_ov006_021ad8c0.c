#include "ffc/types.h"

extern uint8_t data_ov006_021b880c[];
extern char data_ov006_021b9774[];
extern char func_0208243c[];
extern char data_ov006_021b9788[];
extern char func_02082a68[];
extern char data_ov006_021b97a0[];
extern char func_02082364[];
extern char data_ov006_021b97b8[];
extern char func_02082820[];
extern struct { uint32_t pad; uint32_t *p; } data_ov006_021bc7ac;

extern void func_ov006_021a3b88(void *a, void *b);
extern uint32_t func_ov006_021a3b48(void *p);
extern uint32_t func_ov006_021b3888(uint32_t a, int b, int c);
extern void func_ov006_021b46e8(int a, int b);

void func_ov006_021ad8c0(void)
{
    uint32_t n;
    uint8_t buf[22];
    uint8_t *d;
    uint8_t *s;
    uint32_t r;
    uint16_t *reg;

    s = data_ov006_021b880c;
    d = buf;
    n = 0x16;
    do {
        *d = *s;
        s++;
        d++;
    } while (--n);

    func_ov006_021a3b88(data_ov006_021b9774, func_0208243c);
    func_ov006_021a3b88(data_ov006_021b9788, func_02082a68);
    func_ov006_021a3b88(data_ov006_021b97a0, func_02082364);
    func_ov006_021a3b88(data_ov006_021b97b8, func_02082820);
    r = func_ov006_021b3888(func_ov006_021a3b48(buf), 0, 4);
    *data_ov006_021bc7ac.p = r;
    func_ov006_021b46e8(1, 0x10);
    reg = (uint16_t *)0x4001008;
    reg[0] = (reg[0] & ~3) | 3;
    reg[1] = (reg[1] & ~3) | 3;
    reg = (uint16_t *)0x400000a;
    reg[0] = (reg[0] & ~3) | 3;
    reg[1] = (reg[1] & ~3) | 3;
}
