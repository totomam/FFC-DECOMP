#include "ffc/types.h"

extern void func_02084ca4(void *a, void *b, uint32_t n);
extern int func_ov006_0219c210(uint8_t *base, uint8_t *p, int a, int b, int c);
extern void func_02088f30(void);
extern void func_ov006_0219c3b0(int a, int b);
extern void func_ov006_02199640(void *f);
extern void func_ov006_021b1f60(int a);
extern void func_ov006_021b1d6c(void);
extern uint8_t *data_ov006_021bc7fc;

typedef struct {
    uint16_t a[7];
    union { uint8_t flags; struct { uint8_t lo : 4; uint8_t hi : 4; } f; } u;
    uint8_t c;
    uint8_t d[0x14];
} Loc;

void func_ov006_021b191c(int a, int b)
{
    Loc loc;
    uint8_t *src;
    uint8_t *base;
    uint16_t *s;
    uint16_t *d;
    uint32_t i;

    src = (uint8_t *)0x2fffc80;
    loc.u.f.lo = 1;
    loc.c = src[0x1a];
    func_02084ca4(src + 6, loc.d, 0x14);
    loc.u.f.hi = 0;
    s = (uint16_t *)&loc;
    s[0] = 0;
    s[1] = 0;
    s[2] = 0;
    s[3] = 0;
    s[4] = 0;
    s[5] = 0;
    s[6] = 0;
    base = data_ov006_021bc7fc;
    d = (uint16_t *)base;
    i = 7;
    do {
        *d++ = *s++;
    } while (--i);
    *(uint8_t **)(base + 0x1b140) = base + 0x10040;
    if (func_ov006_0219c210(*(uint8_t **)(data_ov006_021bc7fc + 0x1b140), &loc.u.flags, a, b, 2) != 0) {
        func_02088f30();
    }
    func_ov006_0219c3b0(0x100, 1);
    func_ov006_02199640((void *)func_ov006_021b1d6c);
    func_ov006_021b1f60(1);
}
