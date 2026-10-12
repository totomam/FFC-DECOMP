#include "ffc/types.h"

extern void func_ov000_0214bdb8(void *ctx, const void *data, uint32_t len);
extern void func_02084b2c(void *dst, int c, uint32_t n);
extern void func_ov000_0214be38(void *ctx, const void *data);
extern void func_ov000_0214bd88(void *ctx);
extern uint8_t data_ov000_02169864[];
extern uint8_t data_ov000_0216986c[];

void func_ov000_0214a6f8(uint8_t *p, uint8_t *a1, uint32_t a2)
{
    uint8_t buf[0x30];
    void *ctx = p + 0x3a4;

    if (p[0x454] ^ a2) {
        func_ov000_0214bdb8(ctx, data_ov000_02169864, 4);
    } else {
        func_ov000_0214bdb8(ctx, data_ov000_0216986c, 4);
    }
    func_ov000_0214bdb8(ctx, p, 0x30);

    func_02084b2c(buf, 0x36, 0x30);
    func_ov000_0214bdb8(ctx, buf, 0x30);
    func_ov000_0214be38(ctx, a1);
    func_ov000_0214bd88(ctx);

    func_ov000_0214bdb8(ctx, p, 0x30);
    func_02084b2c(buf, 0x5c, 0x30);
    func_ov000_0214bdb8(ctx, buf, 0x30);
    func_ov000_0214bdb8(ctx, a1, 0x10);
    func_ov000_0214be38(ctx, a1);
}
