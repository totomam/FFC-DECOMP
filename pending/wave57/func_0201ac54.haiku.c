#include "ffc/types.h"

extern int32_t func_020711ac(void *a, const uint8_t *b, uint32_t c, uint32_t d);
extern void func_0201ac38(uint32_t x);
extern uint32_t func_0209a978(uint32_t a, uint32_t b);
extern uint8_t *func_02056830(uint32_t size);
extern int32_t func_020711c4(void *a, const uint8_t *b, uint8_t *c);
extern void func_0208f0f0(uint8_t *a, const uint8_t *b, uint32_t n);
extern void func_0208f15c(uint8_t *a, uint8_t *b, uint32_t n, uint8_t *c);
extern void func_02083bcc(uint8_t *a, uint8_t *b, uint32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern void func_02084ca4(uint8_t *a, const uint8_t *b, uint32_t n);
extern void func_02056858(uint8_t *p);
extern const uint8_t data_0209e0d0[];

int32_t func_0201ac54(uint8_t *s, const uint8_t *src, uint32_t len, uint32_t off)
{
    volatile uint8_t big[0x400];
    uint8_t k[16];
    uint8_t t1[16];
    uint8_t t2[16];
    uint32_t result = 0;
    uint32_t count;
    uint32_t i;
    uint32_t j;
    uint8_t *blocks;
    uint8_t *b;
    void *ctx;

    big[0] = 0;
    ctx = *(void **)(s + 0x10);
    if (ctx == 0) {
        return 0;
    }
    if (func_020711ac(ctx, src, len, off) == 0) {
        return 0;
    }
    func_0201ac38(0);
    count = func_0209a978(len + 0x1df, 0x1e0);
    blocks = func_02056830(count << 9);
    if (func_020711c4(ctx, src, blocks) != 0) {
        if (count > 0) {
            for (i = 0; i < count; i++) {
                b = blocks + (i << 9);
                for (j = 0; j < 16; j++) {
                    k[j] = data_0209e0d0[j] ^ b[j];
                }
                func_0208f0f0(t1, k, 16);
                func_0208f15c(t1, b + 0x10, 0x1f0, b + 0x10);
                func_02083bcc(t2, b + 0x20, 0x1e0);
                if (func_02090410(t2, b + 0x10, 16) != 0) {
                    goto done;
                }
                func_02084ca4(b + 0x20, (uint8_t *)(off + (i * 0x1e0)), 0x1e0);
            }
        }
        result = 1;
    } else {
        s[0x2a] = 0;
    }
done:
    func_02056858(blocks);
    func_0201ac38(1);
    return result;
}
