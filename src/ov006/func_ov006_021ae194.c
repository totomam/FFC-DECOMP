#include "ffc/types.h"

extern void func_ov006_021a3b88(void *a, void *b);
extern uint32_t func_ov006_021a3b48(void *p);
extern uint32_t func_ov006_021b3888(uint32_t a, int b, int c);
extern uint8_t data_ov006_021b8850[];
extern uint8_t data_ov006_021b97e4[];
extern uint8_t data_ov006_021b97fc[];
extern uint8_t data_ov006_021b9814[];
extern void func_02082a68(void);
extern void func_02082364(void);
extern void func_02082820(void);
extern uint32_t data_ov006_021bc7b4[];

void func_ov006_021ae194(void)
{
    uint8_t buf[22];
    uint32_t n;
    uint8_t *dst;
    uint8_t *src;
    volatile uint16_t *r;

    dst = buf;
    src = data_ov006_021b8850;
    n = 22;
    do {
        uint8_t v = *src;
        src++;
        *dst = v;
        dst++;
        n--;
    } while (n != 0);
    func_ov006_021a3b88(data_ov006_021b97e4, func_02082a68);
    func_ov006_021a3b88(data_ov006_021b97fc, func_02082364);
    func_ov006_021a3b88(data_ov006_021b9814, func_02082820);
    data_ov006_021bc7b4[1] = func_ov006_021b3888(func_ov006_021a3b48(buf), 0, 4);

    r = (volatile uint16_t *)0x4001008;
    r[0] = (r[0] & ~3) | 3;
    r[1] = (r[1] & ~3) | 3;
    r = (volatile uint16_t *)0x400000a;
    r[0] = (r[0] & ~3) | 3;
    r[1] = (r[1] & ~3) | 3;
}
