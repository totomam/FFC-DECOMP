#include "ffc/types.h"

extern void func_ov006_021afce8(void);
extern void func_ov006_021a6590(void);
extern void func_ov006_021a3cd4(void);
extern void func_ov006_021a3e18(void);
extern void func_ov006_021a3a94(void);
extern uint32_t func_ov006_021a6524(void);
extern uint32_t func_ov006_021a6540(uint32_t);
extern void *func_ov006_021a65c4(void *);
extern void *func_ov006_021a3b48(void *);
extern void func_ov006_021b3de8(uint32_t, void *);
extern void func_ov006_021a3b88(void *, void (*)(void));
extern uint32_t func_ov006_021a6530(void);
extern void func_ov006_021b46e8(uint32_t, uint32_t);
extern void func_ov006_021a64c8(void (*)(void));
extern void func_ov006_021a6bdc(void);
extern void func_02082a10(void);
extern void func_020823d0(void);
extern void func_02082604(void);
extern void func_020824a8(void);
extern void func_02082a68(void);
extern void func_02082364(void);
extern void func_020825b8(void);
extern void func_0208243c(void);
extern void func_020827ac(void);

extern uint8_t data_ov006_021b91c4[];
extern void *data_ov006_021b91a8[];
extern void *data_ov006_021bc738;
extern uint8_t data_ov006_021b91d4[];
extern uint8_t data_ov006_021b91e8[];
extern uint8_t data_ov006_021b91fc[];
extern uint8_t data_ov006_021b9210[];
extern uint8_t data_ov006_021b9224[];
extern uint8_t data_ov006_021b923c[];
extern uint8_t data_ov006_021b9254[];
extern uint8_t data_ov006_021b926c[];
extern uint8_t data_ov006_021b9284[];
extern uint8_t data_ov006_021b929c[];
extern uint8_t data_ov006_021b92b4[];
extern uint8_t data_ov006_021b92c8[];

void func_ov006_021a6a80(void)
{
    void *p;
    uint32_t v;

    func_ov006_021afce8();
    func_ov006_021a6590();
    func_ov006_021a3cd4();
    func_ov006_021a3e18();
    func_ov006_021a3a94();
    v = func_ov006_021a6524();
    if (v == 1 && func_ov006_021a6540(2) != 0) {
        p = data_ov006_021b91c4;
    } else {
        p = data_ov006_021b91a8[func_ov006_021a6524()];
    }
    data_ov006_021bc738 = func_ov006_021a65c4(p);
    func_ov006_021b3de8(1, func_ov006_021a3b48(data_ov006_021b91d4));
    func_ov006_021b3de8(0, func_ov006_021a3b48(data_ov006_021b91e8));
    func_ov006_021a3b88(data_ov006_021b91fc, func_02082a10);
    func_ov006_021a3b88(data_ov006_021b9210, func_020823d0);
    func_ov006_021a3b88(data_ov006_021b9224, func_02082604);
    func_ov006_021a3b88(data_ov006_021b923c, func_020824a8);
    func_ov006_021a3b88(data_ov006_021b9254, func_02082a68);
    func_ov006_021a3b88(data_ov006_021b926c, func_02082364);
    func_ov006_021a3b88(data_ov006_021b9284, func_020825b8);
    func_ov006_021a3b88(data_ov006_021b929c, func_0208243c);
    v = func_ov006_021a6530();
    switch (v) {
    case 0:
        func_ov006_021a3b88(data_ov006_021b92b4, func_020827ac);
        break;
    case 1:
        func_ov006_021a3b88(data_ov006_021b92c8, func_020827ac);
        break;
    }
    {
        volatile uint16_t *r2 = (volatile uint16_t *)0x400100a;
        volatile uint16_t *r3 = (volatile uint16_t *)0x400000a;
        *r2 = (*r2 & ~3) | 3;
        *r3 = (*r3 & ~3) | 3;
        {
            uint32_t u = *r3;
            uint32_t t = u & ~3;
            *r3 = t | 3;
        }
    }
    func_ov006_021b46e8(1, 2);
    func_ov006_021b46e8(0, 2);
    func_ov006_021a64c8(func_ov006_021a6bdc);
}
