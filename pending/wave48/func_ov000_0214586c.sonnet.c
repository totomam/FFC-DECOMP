#include "ffc/types.h"

typedef struct {
    uint8_t pad0[0x20];
    uint8_t *buf;
    uint8_t pad1[0x38];
    volatile uint32_t f5c;
    volatile uint32_t f60;
    volatile uint32_t f64;
} G;

extern G data_ov000_0216bc60;
extern uint8_t data_ov000_021697e8[];
extern void func_02084e04(void *dst, const void *src, uint32_t n);

void func_ov000_0214586c(void *a0, void *a1, uint8_t *a2, uint32_t a3, void *a4, uint32_t a5)
{
    uint32_t r0, r5;
    uint8_t *buf = data_ov000_0216bc60.buf;

    if (buf == 0) {
        return;
    }
    if (data_ov000_0216bc60.f5c == 0) {
        return;
    }
    r0 = a3 + a5;
    if (r0 < 8) {
        return;
    }
    if (r0 > 0x5e4) {
        return;
    }
    if (a2[0] != data_ov000_021697e8[0] || a2[1] != data_ov000_021697e8[1] || a2[2] != data_ov000_021697e8[2]) {
        return;
    }
    if (a2[6] != 8) {
        return;
    }
    if (a2[7] != 0 && a2[7] != 6) {
        return;
    }
    r0 = (uint16_t)((r0 + 9) & ~1u);
    r5 = data_ov000_0216bc60.f60 + r0;
    if (data_ov000_0216bc60.f60 < data_ov000_0216bc60.f64 && data_ov000_0216bc60.f64 <= r5) {
        return;
    }
    if (r5 == data_ov000_0216bc60.f5c) {
        r5 = 0;
        if (data_ov000_0216bc60.f64 == 0) {
            return;
        }
    } else if (r5 > data_ov000_0216bc60.f5c) {
        r5 = r0;
        if (data_ov000_0216bc60.f64 <= r0) {
            return;
        }
    }
    if (data_ov000_0216bc60.f60 + r0 > data_ov000_0216bc60.f5c) {
        if (data_ov000_0216bc60.f5c - data_ov000_0216bc60.f60 >= 2) {
            *(uint16_t *)(buf + data_ov000_0216bc60.f60) = 0;
        }
        data_ov000_0216bc60.f60 = 0;
    }
    *(uint16_t *)(data_ov000_0216bc60.buf + data_ov000_0216bc60.f60) = (uint16_t)r0;
    func_02084e04(a1, data_ov000_0216bc60.buf + data_ov000_0216bc60.f60 + 2, 6);
    func_02084e04(a0, data_ov000_0216bc60.buf + data_ov000_0216bc60.f60 + 8, 6);
    func_02084e04(a2 + 6, data_ov000_0216bc60.buf + data_ov000_0216bc60.f60 + 14, a3 - 6);
    if (a4 != 0 && a5 != 0) {
        func_02084e04(a4, data_ov000_0216bc60.buf + data_ov000_0216bc60.f60 + 8 + a3, a5);
    }
    data_ov000_0216bc60.f60 = r5;
}
