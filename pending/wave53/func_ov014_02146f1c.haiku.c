#include "ffc/types.h"

extern void func_02082de0(int);
extern void func_02084a0c(int, uint32_t, uint32_t);
extern void func_0208359c(void);
extern void func_020819e8(int, int, int);
extern void func_0207fe70(void *);
extern void func_02081aa0(void *, void *, int, int, int, int);
extern void func_02088a18(void);
extern void func_020819ac(void);
extern uint8_t data_ov014_02155a5c[];

typedef volatile uint32_t vu32;
typedef volatile uint16_t vu16;

void *func_ov014_02146f1c(void *self)
{
    uint32_t loc[4];
    vu32 *r4;
    vu16 *h8;
    vu16 *ha;
    vu16 *hc;
    vu16 *he;
    uint32_t t;

    *(uint8_t **)self = data_ov014_02155a5c;
    *(uint8_t *)((uint8_t *)self + 0x34) = 0;
    *(uint32_t *)((uint8_t *)self + 0x48) = 0;
    *(uint32_t *)((uint8_t *)self + 0x4c) = 0;
    *(uint8_t *)((uint8_t *)self + 0x6c) = 1;
    *(uint32_t *)((uint8_t *)self + 0x88) = 0;
    *(uint32_t *)((uint8_t *)self + 0x8c) = 0;
    *(uint32_t *)((uint8_t *)self + 0x90) = 0;

    func_02082de0(7);
    func_02084a0c(0, 0x06000000, 0x00060000);
    func_0208359c();
    func_02082de0(7);
    func_020819e8(1, 5, 0);

    r4 = (vu32 *)(1 << 26);
    t = *r4;
    *r4 = t & 0xc7ffffff;
    t = *r4;
    *r4 = (t & 0xf8ffffff) | 0x01000000;

    func_0207fe70(loc);

    h8 = (vu16 *)r4 + 4;
    ha = (vu16 *)r4 + 5;
    hc = (vu16 *)r4 + 6;
    he = (vu16 *)r4 + 7;

    *h8 = *h8 & 0x43;
    r4[4] = 0;
    *ha = (*ha & 0x43) | 0x1008;
    r4[5] = 0;
    *hc = (*hc & 0x43) | 0x4884;
    func_02081aa0((void *)(r4 + 8), loc, 0x80, 0x60, 0, 0);
    *he = (*he & 0x43) | 0x5084;
    func_02081aa0((void *)(r4 + 12), loc, 0x80, 0x60, 0, 0);

    *h8 = *h8 & ~3;
    *ha = (*ha & ~3) | 1;
    *hc = (*hc & ~3) | 2;
    *he = (*he & ~3) | 3;

    func_02088a18();
    func_020819ac();
    return self;
}
