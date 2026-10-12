#include "ffc/types.h"

extern uint32_t func_0205681c(uint32_t size);
extern uint32_t func_ov005_02196728(uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t e, uint32_t f, uint32_t g);
extern uint32_t func_ov008_0219c624(uint8_t *s, uint32_t idx);
extern void func_ov005_02196bec(uint32_t a, uint32_t b);
extern uint32_t func_ov005_02197868(uint32_t *out);
extern void func_ov005_02196c3c(uint32_t a);
extern void func_0200d5d4(void *object, uint32_t value);
extern void func_020695ec(uint8_t *s, uint32_t v);
extern void func_02069670(uint8_t *s, uint32_t v, uint32_t size, uint32_t p);

extern uint32_t data_ov008_021a7cbc[];

#define U32(p, off) (*(uint32_t *)((uint8_t *)(p) + (off)))

uint32_t func_ov008_0219ca3c(uint8_t *s)
{
    int i;
    uint32_t pos[2];
    uint32_t val, tmp, r6, x, y, v, cnt;
    uint8_t r7;
    volatile uint32_t *vc8 = (volatile uint32_t *)(s + 0xc8);
    uint32_t a, b;
    uint32_t *c4;

    a = *vc8;
    b = *vc8;
    *vc8 = b - a;

    for (i = 0; i < 8; i++) {
        x = i % 4;
        y = (uint32_t)i >> 2;
        r7 = (uint8_t)(i + (s[0x105] << 3));

        pos[0] = data_ov008_021a7cbc[6] + x * data_ov008_021a7cbc[16] + y * data_ov008_021a7cbc[18];
        pos[1] = data_ov008_021a7cbc[7] + x * data_ov008_021a7cbc[17] + y * data_ov008_021a7cbc[19];

        if (U32(s, 0xf0) > r7) {
            r6 = func_0205681c(0xc4);
            if (r6 != 0) {
                v = (*(uint32_t **)(s + 0xec))[r7];
                val = func_ov005_02196728(r6, U32(s, 0xb8), pos[0], pos[1], v, 0, 2);
            } else {
                val = r6;
            }
            func_ov005_02196bec(val, func_ov008_0219c624(s, r7));
        } else {
            r6 = func_0205681c(0xc4);
            if (r6 != 0) {
                func_ov005_02197868(&tmp);
                r6 = func_ov005_02196728(r6, U32(s, 0xb8), pos[0], pos[1], tmp, 0, 2);
            }
            val = r6;
            func_ov005_02196c3c(val);
        }

        if (U32(s, 0xc8) < U32(s, 0xcc)) {
            cnt = U32(s, 0xc8) + 1;
            U32(s, 0xc8) = cnt;
            c4 = *(uint32_t **)(s + 0xc4);
            c4[cnt - 1] = val;
        } else {
            func_0200d5d4(s + 0xc4, val);
        }

        func_020695ec(s, val);
    }

    c4 = *(uint32_t **)(s + 0xc4);
    func_02069670(s, c4[0], 4, U32(s, 0xbc));
    func_02069670(s, c4[1], 4, U32(s, 0xbc));
    func_02069670(s, c4[2], 4, U32(s, 0xbc));
    func_02069670(s, c4[3], 4, U32(s, 0xbc));
    func_02069670(s, c4[4], 2, U32(s, 0xbc));
    func_02069670(s, c4[5], 2, U32(s, 0xbc));
    func_02069670(s, c4[6], 2, U32(s, 0xbc));
    func_02069670(s, c4[7], 2, U32(s, 0xbc));
    return 0;
}
