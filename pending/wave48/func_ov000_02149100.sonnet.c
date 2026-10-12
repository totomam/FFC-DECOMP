#include "ffc/types.h"

typedef struct { uint8_t d[0xfe]; uint16_t c; } H;
typedef struct { H h[2]; } S;
extern int32_t func_ov000_02148f80(uint8_t *p, uint32_t q);
extern void *func_02084b2c(void *p, int c, uint32_t n);
extern uint32_t func_02084118(uint32_t p, uint8_t *q, uint32_t n);
extern int32_t func_ov000_02149414(uint8_t *p, uint8_t *q);
extern void func_ov000_0214926c(uint8_t *p, uint32_t n);
extern int32_t func_ov000_02149370(uint8_t *p, uint32_t q);

int32_t func_ov000_02149100(uint8_t *a, uint32_t b)
{
    int32_t ret;
    uint32_t found[3];
    uint32_t mask;
    uint8_t bits;
    uint32_t flag;
    int32_t i;

    ret = func_ov000_02148f80(a + 0x600, b);
    func_02084b2c(found, 0, 12);

    for (i = 0; i < 3; i++) {
        S *sp = (S *)a;
        uint32_t x = func_02084118(b, sp[i].h[0].d, 0xfe);
        uint32_t y = func_02084118(b, sp[i].h[1].d, 0xfe);
        if (x == sp[i].h[0].c && y == sp[i].h[1].c) {
            if (func_ov000_02149414((uint8_t *)&sp[i], (uint8_t *)&sp[i].h[1]) != 0) {
                found[i] = 1;
            }
        }
    }

    if (found[0] && found[1] && found[2]) {
        return ret;
    }

    mask = a[0xef];
    if (found[0] == 0) {
        func_ov000_0214926c(a, 0);
        if (found[1] != 0) {
            mask = a[0x2ef];
        } else {
            mask = 7;
        }
    }
    if (found[1] == 0) {
        func_ov000_0214926c(a, 1);
    }
    if (found[2] == 0) {
        func_ov000_0214926c(a, 2);
    }

    flag = 0;
    bits = 0;
    for (i = 0; i < 3; i++) {
        if (a[(i << 9) + 0xe7] != 0xff) {
            bits |= (uint8_t)(1 << i);
        } else if (mask & (1 << i)) {
            flag = 1;
        }
    }
    a[0xef] = (uint8_t)bits;
    a[0x2ef] = (uint8_t)bits;

    if (func_ov000_02149370(a, b) == 0) {
        return (int32_t)0xffffd8f0;
    }

    if (found[0] == 0 && found[1] == 0 && found[2] == 0) {
        flag = 0;
    }

    if (ret == 0) {
        if (flag != 0) {
            return (int32_t)0xffffd8ee;
        }
        return 0;
    }
    return ret;
}
