#include "ffc/types.h"

extern uint32_t data_021440c8;
extern uint8_t data_021440c4[];
extern uint8_t data_02144100[];
extern uint8_t data_02144104[];

extern uint32_t func_020866bc(uint32_t);
extern void func_0208ec74(uint16_t, void *);
extern void func_0208ec18(void *);
extern void func_02087874(void *, uint32_t);
extern void func_020845a8(uint32_t, uint32_t, void *, uint32_t, uint32_t);
extern void func_0208ec4c(void *);
extern void func_0208ecb0(uint16_t, void *);
extern uint32_t func_0208eb74(void);
extern void func_020849f4(uint32_t, void *, uint32_t);
extern void func_02087840(void);
extern void func_0208ecc8(uint32_t);
extern void WaitByLoop(uint32_t);

void func_0208edd8(void) {
    uint32_t irq;
    uint32_t s_14[2];
    uint32_t s_c[2];
    uint8_t *volatile p8;
    uint16_t ime;
    uint32_t bit;
    uint32_t i;
    uint8_t *d;

    if (data_021440c8 == 0) {
    data_021440c8 = 1;
    if (*(volatile uint16_t *)0x4000300 & 1) {
    irq = func_020866bc(1 << 18);
    ime = *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = 1;
    func_0208ec74(*(uint16_t *)(data_021440c4 + 2), s_14);
    bit = (*(volatile uint16_t *)0x4000204 & 0x8000) >> 15;
    func_0208ec18(s_c);
    *(volatile uint16_t *)0x4000204 &= 0x7fff;
    uint8_t *t = data_02144100;
    p8 = t;
    func_02087874(t + 0x80, 0x40);
    t = p8 + 0x80;
    p8 = t;
    func_020845a8(1, 0x8000080, t, 0x40, 1);
    *(volatile uint16_t *)0x4000204 = (*(volatile uint16_t *)0x4000204 & 0x7fff) | (bit << 15);
    func_0208ec4c(s_c);
    func_0208ecb0(*(uint16_t *)(data_021440c4 + 2), s_14);
    if (*(volatile uint8_t *)0x2ffff9b != 0 || *(volatile uint8_t *)0x2ffff9a == 0) {
    d = (uint8_t *)0x2fffc30;
    *(uint16_t *)d = *(uint16_t *)(data_02144100 + 0xbe);
    for (i = 0; i < 3; i++) {
        d[2 + i] = data_02144100[0xb5 + i];
    }
    *(uint16_t *)(d + 6) = *(uint16_t *)(data_02144100 + 0xb0);
    *(uint32_t *)(d + 8) = *(uint32_t *)(data_02144100 + 0xac);
    if (func_0208eb74() != 0) {
        *(volatile uint8_t *)0x2ffff9b = 1;
    } else {
        *(volatile uint8_t *)0x2ffff9b = 0;
    }
    *(volatile uint8_t *)0x2ffff9a = 1;
    }
    func_020849f4(0xffff0020, data_02144104, 0x9c);
    func_02087840();
    func_0208ecc8(((((uint32_t)data_02144100 - 0x02000000) >> 5) << 6) | 1);
    i = 1;
    while (*(volatile uint16_t *)data_021440c4 != 1) {
        WaitByLoop(i);
    }
    *(volatile uint16_t *)0x4000208;
    *(volatile uint16_t *)0x4000208 = ime;
    func_020866bc(irq);
    }
    }
}
