#include "ffc/types.h"

extern int func_ov000_021457a4(uint32_t a);
extern uint32_t func_ov000_02145764(uint32_t a);
extern uint32_t func_ov000_02145a4c(void);
extern uint32_t func_ov000_02145b74(uint32_t a);
extern void func_02084e04(const void *src, void *dst, uint32_t n);
extern void func_ov000_02145834(uint8_t *a, uint8_t *b, uint32_t c, uint32_t d);
extern uint8_t data_ov000_0216bcc8[];

void func_ov000_02145ca4(uint8_t *p, uint8_t *q, uint32_t s, uint32_t t, uint32_t a5, uint16_t a6) {
    uint32_t r;
    *(uint16_t *)(p - 2) = (uint16_t)((a6 >> 8) | (a6 << 8));
    if (!func_ov000_021457a4(a5)) {
        uint32_t x = func_ov000_02145764(a5);
        if (!x) return;
        r = func_ov000_02145a4c();
        if (!r) r = func_ov000_02145b74(x);
        if (!r) return;
        func_02084e04(r, p - 14, 6);
    } else {
        p[-14] = 1;
        p[-13] = 0;
        p[-12] = 0x5e;
        p[-11] = (uint8_t)((a5 >> 16) & 0x7f);
        p[-10] = (uint8_t)(a5 >> 8);
        p[-9] = (uint8_t)a5;
    }
    func_02084e04(data_ov000_0216bcc8, p - 8, 6);
    func_ov000_02145834(p - 14, q + 14, s, t);
}
