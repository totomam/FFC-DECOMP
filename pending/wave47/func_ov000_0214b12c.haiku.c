#include "ffc/types.h"

typedef struct {
    uint8_t pad[0xc];
    uint8_t *base;
} Ctx;

extern void *(*data_ov000_0216bc74)(uint32_t);
extern void (*data_ov000_0216bca4)(uint8_t *);
extern void *func_02084b2c(void *dst, int c, uint32_t n);
extern void *func_02084ca4(void *dst, const void *src, uint32_t n);
extern void func_ov000_0214a6f8(uint8_t *base, uint8_t *p, uint32_t z);
extern void func_ov000_0214a788(uint8_t *base, uint8_t *p, uint32_t z);
extern void func_ov000_0214ac74(uint8_t *base, uint8_t *p, uint32_t n);
extern uint8_t *func_ov000_0214aa70(uint8_t *base, uint8_t *p);
extern void func_ov000_02147c54(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d, Ctx *e);

void func_ov000_0214b12c(Ctx *ctx)
{
    uint8_t *b = ctx->base;
    uint8_t *p = data_ov000_0216bc74(0x83);
    if (p == 0) {
        b[0x455] = 9;
        return;
    }
    p[0] = 0x14;
    p[1] = 3;
    p[2] = 0;
    p[3] = 0;
    p[4] = 1;
    p[5] = 1;
    func_02084b2c(b + 0x1cc, 0, 8);
    p[6] = 0x16;
    p[7] = 3;
    p[8] = 0;
    p[9] = 0;
    p[0xa] = 0x28;
    p[0xb] = 0x14;
    p[0xc] = 0;
    p[0xd] = 0;
    p[0xe] = 0x24;
    func_02084ca4(b + 0x3a4, b + 0x3fc, 0x58);
    func_ov000_0214a6f8(b, p + 0xf, 0);
    func_02084ca4(b + 0x3fc, b + 0x3a4, 0x58);
    func_02084ca4(b + 0x2ec, b + 0x348, 0x5c);
    func_ov000_0214a788(b, p + 0x1f, 0);
    func_02084ca4(b + 0x348, b + 0x2ec, 0x5c);
    func_ov000_0214ac74(b, p + 0xb, 0x28);
    {
        uint8_t *r = func_ov000_0214aa70(b, p + 6);
        func_ov000_02147c54(p, r + 6, 0, 0, ctx);
    }
    data_ov000_0216bca4(p);
}
