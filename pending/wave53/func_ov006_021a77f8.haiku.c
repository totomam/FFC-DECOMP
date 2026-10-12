#include "ffc/types.h"

extern uint8_t data_ov006_021b8538[];
extern uint8_t data_ov006_021b8550[];
extern uint8_t data_ov006_021b93a4[];
extern uint8_t data_ov006_021b93bc[];
extern uint32_t data_ov006_021bc748[];

extern void func_ov006_021a3b88(void *a, void (*b)(void));
extern uint8_t *func_ov006_021a3b48(void *p);
extern uint8_t *func_ov006_021b3888(uint8_t *p, uint32_t a, uint32_t b);
extern void func_ov000_021585a8(void *p);
extern void func_02084ca4(void *d, void *s, uint32_t n);
extern void func_020878ac(uint8_t *p, uint32_t n);
extern void func_02082364(uint8_t *p, uint32_t v, uint32_t n);
extern void func_ov006_021b392c(uint8_t *p);
extern void func_02082a68(void);
extern void func_02082820(void);

int func_ov006_021a77f8(void)
{
    uint8_t buf1[0x19];
    uint8_t buf2[0x14];
    uint32_t st[5];
    uint8_t *base;
    uint8_t *dst;
    uint8_t *src;
    uint32_t n;
    uint32_t i;
    uint16_t *reg;

    src = data_ov006_021b8538;
    dst = buf1 + 3;
    n = 22;
    do {
        *dst++ = *src++;
    } while (--n);

    src = data_ov006_021b8550;
    dst = buf2;
    n = 23;
    do {
        *dst++ = *src++;
    } while (--n);

    func_ov006_021a3b88(data_ov006_021b93a4, func_02082a68);
    func_ov006_021a3b88(data_ov006_021b93bc, func_02082820);

    data_ov006_021bc748[1] = (uint32_t)func_ov006_021b3888(func_ov006_021a3b48(buf2), 0, 4);

    base = func_ov006_021b3888(func_ov006_021a3b48(buf1 + 3), 0, 4);

    func_ov000_021585a8(st);
    if (st[0] == 0 && st[1] == 0) {
        for (i = 0; i < 2; i++) {
            func_02084ca4(base + 0xc0 + i * 0x20, base + 0x40 + i * 0x20, 0x20);
        }
    }

    func_020878ac(base, 0x200);
    func_02082364(base, 0, 0x200);
    func_ov006_021b392c(base);

    reg = (uint16_t *)0x04001008;
    reg[0] = (reg[0] & ~3) | 3;
    reg[1] = (reg[1] & ~3) | 3;

    reg = (uint16_t *)0x0400000a;
    reg[0] = (reg[0] & ~3) | 3;
    reg[1] = (reg[1] & ~3) | 3;

    return 0;
}
