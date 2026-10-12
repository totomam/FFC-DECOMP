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
    uint32_t o;
    uint32_t result;
    uint8_t *blocks;
    uint32_t count;
    uint32_t i;
    uint32_t j;
    uint8_t *b;
    struct { uint8_t t1[16]; uint8_t big[0x3f8]; } L;
    uint8_t k[16];
    uint8_t t2[16];

    if (*(void **)(s + 0x10) == 0) {
        return 0;
    }
    if (func_020711ac(*(void **)(s + 0x10), src, len, off) == 0) {
        return 0;
    }
    result = 0;
    func_0201ac38(0);
    count = func_0209a978(len + 0x1df, 0x1e0);
    blocks = func_02056830(count << 9);
    if (func_020711c4(*(void **)(s + 0x10), src, blocks) == 0) {
        s[0x2a] = result;
    } else {
        {
            for (i = result; i < count; i++) {
                b = blocks + (i << 9);
                o = i * 0x1e0;
                for (j = 0; j < 16; j++) {
                    k[j] = data_0209e0d0[j] ^ b[j];
                }
                func_0208f0f0(L.t1, k, 16);
                func_0208f15c(L.t1, b + 0x10, 0x1f0, b + 0x10);
                func_02083bcc(t2, b + 0x20, 0x1e0);
                if (func_02090410(t2, b + 0x10, 16) != 0) {
                    goto done;
                }
                func_02084ca4(b + 0x20, (uint8_t *)(off + o), 0x1e0);
            }
        }
        result = 1;
    }
done:
    func_02056858(blocks);
    func_0201ac38(1);
    return result;
}
