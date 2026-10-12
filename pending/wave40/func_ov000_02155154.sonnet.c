#include "ffc/types.h"

extern void func_02088e8c(uint32_t *p);
extern void func_ov000_02158cf4(uint32_t *p);
extern void func_ov000_02154e14(uint8_t *ctx, uint32_t a, uint32_t b);
extern uint64_t func_0209a71c(uint64_t first, uint64_t second);
extern void func_ov000_02154e2c(uint8_t *ctx, uint32_t a, uint32_t b);
extern void func_ov000_02154ee8(uint8_t *ctx, uint32_t v);

void func_ov000_02155154(uint8_t *ctx)
{
    uint32_t buf[13];
    uint32_t i;
    uint64_t x;
    uint64_t s;
    uint32_t lo;
    uint32_t hi;

    func_02088e8c(buf);
    for (i = 1; i < 8; i++) {
        buf[i] ^= buf[i - 1];
    }
    x = buf[7];
    func_ov000_02158cf4(&buf[8]);
    if (buf[12] != 0) {
        func_ov000_02154e14(ctx, buf[8], buf[9]);
    } else {
        func_ov000_02154e14(ctx, buf[10], buf[11]);
    }
    s = func_0209a71c(x, 0x5d588b656c078965ULL);
    s += 0x269ec3ULL;
    hi = (uint32_t)(s >> 32);
    lo = (uint32_t)s;
    func_ov000_02154e2c(ctx, hi, lo);
    func_ov000_02154ee8(ctx, 1);
}
