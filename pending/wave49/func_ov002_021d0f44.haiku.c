#include "ffc/types.h"

typedef struct {
    uint32_t x0;
    void *x4;
    uint32_t x8;
    uint8_t x12;
    uint8_t pad[3];
} FfcLocal28;

typedef struct {
    uint8_t buf[12];
    FfcLocal28 s;
} FfcFrame;

extern void func_ov002_021d1094(void *a, void *elem, uint32_t x);
extern int32_t func_ov002_021d0e5c(void *a, void *b);
extern void func_02015e8c(void *out, void *data);
extern void *func_02052d90(void *mar, uint32_t index);
extern void func_02052d3c(void *p, uint32_t q);
extern void func_02052c04(void *p);
extern void func_02053290(void *object);
extern uint32_t func_ov002_021d0eb8(void *a, void *b, uint32_t c, uint32_t d);
extern uint32_t func_0209a978(uint32_t x, uint32_t y);
extern void *func_ov002_021d2aa0(void *b, uint32_t idx);
extern int32_t func_0206c184(uint32_t first, uint32_t second);
extern void *data_020b8e44;

uint32_t func_ov002_021d0f44(void *a, void *b, uint32_t c)
{
    FfcFrame f;
    int32_t n, m;
    uint32_t cnt = ((uint32_t *)b)[1];
    uint8_t *elem = (uint8_t *)((void **)b)[0] + cnt * 0x30;
    uint32_t r6, lim, i, j, k, ret;
    int32_t q, r7, sp8, d;
    int32_t *p;
    int32_t sum;

    f.buf[0] = 0;
    func_ov002_021d1094(a, elem, f.buf[0]);
    n = func_ov002_021d0e5c(a, b);
    func_02015e8c(&f.s, data_020b8e44);
    m = ((uint8_t *)func_02052d90(f.s.x4, f.s.x8))[0x12] - 1;
    if (f.s.x4 != 0) {
        if (f.s.x12 != 0) {
            func_02052d3c(f.s.x4, f.s.x8);
        }
        func_02052c04(f.s.x4);
    }
    func_02053290(&f.s);
    r6 = func_ov002_021d0eb8(a, b, 0, 0);
    q = (int32_t)func_0209a978((uint32_t)(m * n), 100);
    lim = func_ov002_021d0eb8(a, b, (uint32_t)q, 1);

    r7 = 0;
    p = (int32_t *)func_ov002_021d2aa0(b, lim);
    for (j = 0; j < 6; j++) {
        r7 += p[5 + j];
    }

    if (r7 < 0) {
        if (r6 < lim) {
            d = 1 - r7;
            i = r6;
            do {
                p = (int32_t *)func_ov002_021d2aa0(b, i);
                p[10] += d;
                i++;
            } while (i < lim);
        }
    }

    r7 = 0;
    for (i = r6; i < lim; i++) {
        p = (int32_t *)func_ov002_021d2aa0(b, i);
        sum = 0;
        for (j = 0; j < 6; j++) {
            sum += p[5 + j];
        }
        r7 += sum;
    }

    sp8 = func_0206c184(c, (uint32_t)r7);

    ret = 0;
    r7 = 0;
    for (k = r6; k < lim; k++) {
        p = (int32_t *)func_ov002_021d2aa0(b, k);
        sum = 0;
        for (j = 0; j < 6; j++) {
            sum += p[5 + j];
        }
        r7 += sum;
        if (r7 >= sp8) {
            ret = k;
            break;
        }
    }
    return ret;
}
