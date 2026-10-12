#include "ffc/types.h"

typedef struct {
    uint16_t lo;
    uint16_t hi;
} Ring;

typedef struct {
    uint8_t a;
    uint8_t b;
    uint16_t c;
    uint32_t pad;
    void *q;
    uint8_t flag;
} Frame;

extern void func_0208763c(void *p);
extern void func_02084ca4(void *from, void *to, uint32_t n);
extern void func_02087678(void *p);

void func_02074cf8(uint8_t *p0, Ring *ctx, void *src, uint16_t n, uint8_t arg5)
{
    Frame f;

    f.q = p0 + 0x4238;
    f.flag = 1;
    if (f.flag) {
        func_0208763c(f.q);
    }
    f.a = 1;
    f.b = arg5;
    f.c = n + 4;
    func_02084ca4(&f, (uint8_t *)ctx + 4 + ((uint32_t)ctx->hi << 12) + ctx->lo, 4);
    ctx->lo += 4;
    if (n) {
        func_02084ca4(src, (uint8_t *)ctx + 4 + ((uint32_t)ctx->hi << 12) + ctx->lo, n);
        ctx->lo += n;
    }
    if (f.flag) {
        func_02087678(f.q);
    }
}
