#include "ffc/types.h"

extern void func_02083ac0(void *ctx, const void *data, uint32_t len);
extern void *func_02084b2c(void *dst, int val, uint32_t n);
extern void func_02083760(void *ctx);
extern void func_02084ca4(void *dst, const void *src, uint32_t n);
extern uint8_t data_020b294c[];

void func_02083b54(void *ctx, const void *out)
{
    uint8_t *c = (uint8_t *)ctx;
    uint32_t lo = *(uint32_t *)(c + 0x10);
    uint32_t hi = *(uint32_t *)(c + 0x14);
    uint32_t bitlo = lo << 3;
    uint32_t bithi = (hi << 3) + (lo >> 29);
    uint32_t cnt;
    uint32_t pad;

    func_02083ac0(ctx, data_020b294c, 1);

    cnt = *(uint32_t *)(c + 0x10) & 0x3f;
    pad = 0x40 - cnt;
    if (pad < 8) {
        func_02084b2c(c + 0x18 + cnt, 0, pad);
        func_02083760(ctx);
        pad = 0x40;
        cnt = 0;
    }
    if (pad > 8) {
        func_02084b2c(c + 0x18 + cnt, 0, pad - 8);
    }

    *(uint32_t *)(c + 0x50) = bitlo;
    *(uint32_t *)(c + 0x54) = bithi;
    func_02083760(ctx);
    func_02084ca4(ctx, out, 16);
    func_02084b2c(ctx, 0, 0x58);
}
