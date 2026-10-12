#include "ffc/types.h"

extern uint32_t func_0201ac38(uint32_t x);
extern uint32_t func_0209a978(uint32_t x, uint32_t y);
extern uint8_t *func_02056830(uint32_t size);
extern uint32_t func_020711ac(uint32_t h, uint32_t a);
extern uint32_t func_020711c4(uint32_t h, uint32_t a, uint8_t *b);
extern uint32_t func_020711e8(uint32_t h, uint32_t a, uint8_t *b);
extern void func_02084ca4(uint8_t *dst, uint8_t *src, uint32_t n);
extern void func_0208f0f0(uint8_t *dst, uint8_t *src, uint32_t n);
extern void func_0208f15c(uint8_t *dst, uint8_t *src, uint32_t n, uint8_t *src2);
extern void func_02083bcc(uint8_t *dst, uint8_t *src, uint32_t n);
extern int32_t func_02090410(const uint8_t *first, const uint8_t *second, uint32_t length);
extern uint32_t func_02015938(uint32_t x);
extern uint32_t func_0206c090(void);
extern void func_02056858(uint8_t *p);
extern uint8_t data_0209e0d0[];
extern uint32_t data_020b8e44[];

int32_t func_0201ad64(uint8_t *self, uint32_t a1, uint32_t a2, uint8_t *a3) {
    uint8_t big[0x408];
    uint8_t b3[0x408];
    uint8_t b1[0x10];
    uint8_t b2[0x10];
    uint8_t b0[0x10];
    uint32_t result;
    uint8_t *blk;
    uint8_t *cur;
    uint32_t i;
    uint32_t count;
    uint8_t *p;
    uint32_t j;
    uint32_t off;
    uint32_t q;

    if (*(uint32_t *)(self + 0x10) == 0) {
        return 0;
    }
    result = 0;
    func_0201ac38(0);
    count = func_0209a978(a2 + 0x1df, 0x1e0);
    blk = func_02056830(count << 9);
    cur = 0;
    if (func_020711ac(*(uint32_t *)(self + 0x10), a1) != 0) {
        cur = func_02056830(count << 9);
        if (func_020711c4(*(uint32_t *)(self + 0x10), a1, cur) == 0) {
            self[0x2a] = (uint8_t)result;
            goto done;
        }
    }
    for (i = 0; i < count; i++) {
        off = i << 9;
        p = blk + off;
        q = i * 0x1e0;
        if (cur != 0) {
            uint8_t *c = cur + off;
            func_02084ca4(c, p, 0x200);
            for (j = 0; j < 0x10; j++) {
                b1[j] = data_0209e0d0[j] ^ c[j];
            }
            func_0208f0f0(big, b1, 0x10);
            func_0208f15c(big, c + 0x10, 0x1f0, c + 0x10);
            func_02083bcc(b2, c + 0x20, 0x1e0);
            if (func_02090410(b2, c + 0x10, 0x10) == 0) {
                if (func_02090410(c + 0x20, (a3 + q), 0x1e0) == 0) {
                    continue;
                }
            }
        }
        func_02084ca4((a3 + q), p + 0x20, 0x1e0);
        func_02083bcc(p + 0x10, p + 0x20, 0x1e0);
        for (j = 0; j < 4; j++) {
            func_02015938(data_020b8e44[0]);
            ((uint32_t *)p)[j] = func_0206c090();
        }
        for (j = 0; j < 0x10; j++) {
            b0[j] = data_0209e0d0[j] ^ p[j];
        }
        func_0208f0f0(b3, b0, 0x10);
        func_0208f15c(b3, p + 0x10, 0x1f0, p + 0x10);
    }
    if (func_020711e8(*(uint32_t *)(self + 0x10), a1, blk) == 0) {
        self[0x2a] = 0;
        goto done;
    }
    result = 1;
done:
    func_02056858(cur);
    func_02056858(blk);
    func_0201ac38(1);
    return result;
}
