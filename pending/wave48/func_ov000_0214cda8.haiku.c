#include "ffc/types.h"

extern void *(*data_ov000_0216bc74)(uint32_t size);
extern void (*data_ov000_0216bca4)(void *p);
extern void func_02084b2c(void *p, int v, uint32_t n);
extern uint32_t func_ov000_0214c5f0(uint32_t e, uint32_t d);
extern void func_ov000_0214cc20(uint8_t *q1, uint8_t *p, uint32_t e, uint32_t d, uint8_t *q2);
extern void func_ov000_0214c7e0(uint8_t *a, uint8_t *b, uint8_t *c, uint32_t d);
extern void func_ov000_0214c760(uint8_t *a, uint8_t *b, uint32_t one, uint32_t d);
extern void func_ov000_0214c95c(uint8_t *x, uint8_t *y, uint32_t e, uint8_t *z, uint32_t d, uint8_t *q);
extern void func_ov000_0214ccec(void *a, uint8_t *q5, uint32_t two, uint32_t d, uint32_t idx, uint32_t e, uint8_t *q1, uint8_t *q3, uint8_t *q4);

void func_ov000_0214cda8(void *a, uint8_t *b, uint16_t *c, uint32_t d, uint32_t e)
{
    uint8_t *p;
    uint32_t idx;
    uint8_t *q1, *q2, *q3, *q4, *q5, *q6;
    uint32_t i;
    uint32_t k;
    uint32_t size;

    size = 22 * d;
    p = data_ov000_0216bc74(size);
    if (p != 0) {
        func_02084b2c(p, 0, size);
        q1 = p + 2 * d;
        q2 = q1 + 2 * d;
        q3 = q2 + 2 * d;
        q4 = q3 + 2 * d;
        q5 = q4 + 2 * d;
        q6 = q5 + 2 * d;
        i = 0;
        idx = func_ov000_0214c5f0(e, d);
        ((uint16_t *)p)[idx] = 1;
        func_ov000_0214cc20(q1, p, e, d, q2);
        func_ov000_0214c7e0(q3, p, q1, d);
        func_ov000_0214c760(q1, q3, 1, d);
        func_ov000_0214c95c(q1, q1, e, 0, d, q6);
        func_ov000_0214c7e0(q2, b, p, d);
        func_ov000_0214c95c(0, q2, e, q2, d, q6);
        func_ov000_0214c95c(0, p, e, a, d, q6);
        if ((idx << 4) != 0) {
            do {
                func_ov000_0214ccec(a, q5, 1, d, idx, e, q1, q3, q4);
                k = c[idx - ((int32_t)i >> 4) - 1];
                if (k & (0x20000 >> (i & 15))) {
                    func_ov000_0214ccec(a, q5, (uint32_t)q2, d, idx, e, q1, q3, q4);
                }
                i++;
            } while (i < (idx << 4));
        }
        func_ov000_0214ccec(a, q5, 0, d, idx, e, q1, q3, q4);
        data_ov000_0216bca4(p);
    }
}
