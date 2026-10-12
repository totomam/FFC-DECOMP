#include "ffc/types.h"

extern uint8_t *func_ov000_0214fa54(void);
extern void func_ov000_0214f988(uint32_t x);
extern int32_t func_ov000_0214fb34(uint32_t x);
extern uint16_t func_0208d65c(void);
extern void func_02084ca4(const void *src, void *dst, uint32_t n);
extern const uint8_t data_ov000_02169604[];
extern const uint8_t data_ov000_0216960c[];

#define FIELD(T, off) (*(T *)(p + (off)))

void func_ov000_0215133c(const uint8_t *a, const uint8_t *b, uint32_t c)
{
    uint8_t *p = func_ov000_0214fa54();
    uint16_t t;
    uint32_t f;
    uint32_t flag;
    int32_t sh;
    int32_t i;
    uint32_t k;
    uint32_t off;

    func_ov000_0214f988(c);
    FIELD(uint32_t, 0x22a0) = (uint32_t)(p + 0x600);
    FIELD(uint16_t, 0x22a4) = 0x400;
    sh = (1 << func_ov000_0214fb34(0)) >> 1;
    FIELD(uint16_t, 0x22a6) = (uint16_t)sh;

    t = FIELD(uint16_t, 0x12d8);
    if (t == 0) {
        t = func_0208d65c();
    }
    FIELD(uint16_t, 0x22a8) = t;

    f = FIELD(uint32_t, 0x12d4) & 0x300000;
    flag = (f == 0x300000) ? 0 : 1;
    k = 0x22b0;
    *(uint16_t *)(p + k) = (uint16_t)flag;

    if (a == 0) {
        func_02084ca4(data_ov000_02169604, p + (k - 6), 6);
    } else {
        func_02084ca4(a, p + (k - 6), 6);
    }

    k = 0x22b4;
    if (b == 0 || b == data_ov000_0216960c) {
        func_02084ca4(data_ov000_0216960c, p + k, 0x20);
        i = 0;
        off = k - 2;
    } else {
        func_02084ca4(b, p + k, 0x20);
        for (i = 0; i < 0x20; i++) {
            if (b[i] == 0) {
                break;
            }
        }
        off = 0x22b2;
    }
    *(uint16_t *)(p + off) = (uint16_t)i;
    FIELD(uint32_t, 0x22e4) = 0;
}
