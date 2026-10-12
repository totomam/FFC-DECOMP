#include "ffc/types.h"

extern uint32_t func_ov006_021b42f8(uint32_t a, uint32_t b);
extern void func_02088b3c(void *p);
extern void func_02086b04(void *dst, uint32_t n, const char *fmt, ...);
extern void func_ov006_021b541c(void *dst, const void *src, uint32_t n);
extern void func_ov006_021b45b0(uint32_t h, uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, void *p);
extern void func_ov000_021585a8(void *p);
extern uint64_t func_0209a6e0(uint64_t a, uint64_t b);
extern uint64_t func_0209a71c(uint64_t a, uint64_t b);
extern uint64_t func_0209a6d4(uint64_t a, uint64_t b);
extern void func_ov006_021b4690(uint32_t h);
extern const char data_ov006_021b935c[];
extern const char data_ov006_021b937c[];
extern const char data_ov006_021b9390[];

typedef struct {
    uint32_t h;
    uint8_t info[6];
    uint8_t a[0x14];
    uint8_t b[0x14];
    uint8_t pad2[0x16];
    uint32_t d[4];
    uint64_t v;
    uint32_t t;
} L;

void func_ov006_021a74b8(void)
{
    L l;
    uint64_t x;
    uint32_t i;

    l.h = func_ov006_021b42f8(0, 0);
    func_02088b3c(l.info);
    func_02086b04(l.a, 0x14, data_ov006_021b935c, l.info[0], l.info[1], l.info[2], l.info[3], l.info[4], l.info[5]);
    func_ov006_021b541c(l.b, l.a, 0x14);
    func_ov006_021b45b0(l.h, 8, 0x40, 0xf0, 0x1c, 2, 0x480, l.b);
    func_ov000_021585a8(&l.v);
    if (l.v != 0) {
        l.d[3] = (uint32_t)func_0209a71c(func_0209a6e0(l.v, 10ULL), 1000ULL);
        x = func_0209a6d4(l.v, 10ULL);
        for (i = 0; i < 3; i++) {
            l.d[2 - i] = (uint32_t)func_0209a6e0(x, 10000ULL);
            x = func_0209a6d4(x, 10000ULL);
        }
        func_02086b04(l.a, 0x14, data_ov006_021b937c, l.d[0], l.d[1], l.d[2], l.d[3]);
    } else {
        func_02086b04(l.a, 0x14, data_ov006_021b9390);
    }
    func_ov006_021b541c(l.b, l.a, 0x14);
    func_ov006_021b45b0(l.h, 8, 0x78, 0xf0, 0x1c, 2, 0x480, l.b);
    func_ov006_021b4690(l.h);
}
