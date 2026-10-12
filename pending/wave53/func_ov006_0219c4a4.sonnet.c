#include "ffc/types.h"

typedef struct {
    uint32_t f0;
    uint32_t f4;
    uint32_t f8;
    uint8_t *a;
    uint8_t *b;
} G;

extern G data_ov006_021ba150;
extern uint32_t func_02088978(void);
extern void func_020849ac(uint32_t v, void *p, uint32_t n);
extern void func_02084b2c(void *p, uint32_t v, uint32_t n);
extern void func_ov006_02199640(uint32_t x);
extern void func_ov006_0219cce0(uint32_t x);
extern void func_ov006_0219ccfc(void *p);
extern uint32_t func_ov006_0219b070(void);
extern uint32_t func_ov006_0219c414(void);
extern void func_0208898c(uint32_t x);
extern uint32_t func_020891f4(uint32_t a, uint32_t b);
extern void func_ov006_021997cc(void);
extern void func_ov006_0219b5a8(void);

#define GA (data_ov006_021ba150.a)
#define GB (data_ov006_021ba150.b)

uint32_t func_ov006_0219c4a4(uint32_t a)
{
    uint32_t sp4;
    uint32_t t;
    uint32_t r;
    int i;
    uint32_t m;
    uint32_t v;
    uint8_t j;

    t = func_02088978();
    *(uint16_t *)(GA + 0x32) = a;
    data_ov006_021ba150.f4 = ((uint32_t)GB + 0x7d1f) & ~0x1f;
    sp4 = *(uint32_t *)(GB + 0x14e4);
    m = 0x4d;
    m <<= 6;
    func_020849ac(0, GB + m, 0x69c0);
    func_ov006_02199640(sp4);
    *(uint32_t *)(GB + m - 0x28) = *(uint16_t *)(GA + 0x500) - 6;
    func_ov006_0219cce0(*(uint16_t *)(GA + 0x502));
    func_ov006_0219ccfc(GB + 0x14e4 + 0x54);
    i = 0;
    v = i;
    j = i - 1;
    for (; i < 15; i++) {
        *(uint32_t *)(GB + 0x14e8 + i * 4) = v;
        GB[0x1526 + i] = j;
    }
    GB[0x1524] = v;
    func_020849ac(v, GB + 0x1788, 0x5d40);
    func_02084b2c(GB + 0x1754, v, 0x1e);
    *(uint16_t *)(GA + 0x524) = 1;
    *(void **)(GA + 0x51c) = (void *)func_ov006_021997cc;
    *(void **)(GA + 0x508) = (void *)func_ov006_0219b5a8;
    *(uint16_t *)(GA + 0x34) = *(uint16_t *)(GA + 0x500);
    *(uint16_t *)(GA + 0x518) = (*(uint16_t *)(GA + 0x34) + 0x23) & ~0x1f;
    *(uint16_t *)(GA + 0x36) = *(uint16_t *)(GA + 0x502);
    *(uint16_t *)(GA + 0x51a) = (((*(uint16_t *)(GA + 0x36) + 0xe) * 15 + 0x29) & ~0x1f) << 1;
    func_ov006_0219b070();
    r = func_ov006_0219c414();
    func_0208898c(t);
    *(uint32_t *)(GB + 0x74c8) = func_020891f4(15, 1);
    return r;
}
